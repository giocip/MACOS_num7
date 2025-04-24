# STATIC AND DYNAMIC num7 LIBRARIES FOR macOS

  It may need: 
        
        sudo mkdir -p /usr/local/lib     #libnum7.a, libnum7.dylib file position on system 
        sudo mkdir -p /usr/local/include #num7.h header file position on system 
        sudo mkdir -p /usr/local/bin     #user app/executable file position on system 
        export DYLD_LIBRARY_PATH=/usr/local/lib:$DYLD_LIBRARY_PATH #runtime environment variable by dynamic libraries in .zprofile and .bashrc files for permanent by user  
 
  To get STATIC LIBRARY libnum7.a: 
  
        g++ -std=c++14 -c num7.cpp #num.o STATIC LIBRARY (num7.h in the same compiling folder)  
        ar cr libnum7.a num7.o     #create archive static library libnum7.a  
  
  To get DYNAMIC LIBRARY libnum7.dylib: 
  
        g++ -std=c++14 -dynamiclib num7.cpp -o libnum7.dylib -current_version 1.0.0 -compatibility_version 1.0.0 #num7.h in the same compiling folder  

  To get num7.dmg: 
  
        hdiutil create -volname "num7" -srcfolder /tmp/num7 -ov -format UDZO num7.dmg #all files to package in /tmp/num7 folder 

  To remove file security:

        xattr -c num7.dmg
      
  To put following folders and files: 
  
            /usr/local/bin:      n7
            /usr/local/lib:      libnum7.a libnum7.dylib 
            /usr/local/include:  num7.h 
  
  To compile app: 

        g++ -std=c++14 test_num7_eligibility.cpp /usr/local/lib/libnum7.a #STATIC LIBRARY 
        g++ -std=c++14 test_num7_eligibility.cpp -lnum7                   #DYNAMIC LIBRARY 

  To check app/executable file:

        otool -L /path/to/executable      
        
