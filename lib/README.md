# STATIC AND DYNAMIC num7 LIBRARIES  

  It may need: 
        
        mkdir -p /usr/local/lib (libnum7.a and libnum7.dylib file position on system) 
        mkdir -p /usr/local/include (num7.h header file position on system) 
        mkdir -p /usr/local/bin (user app/executable file position on system) 
        export DYLD_LIBRARY_PATH=/usr/local/lib:$DYLD_LIBRARY_PATH (runtime environment variable by dynamic library libnum7.dylib)  
 
  To get STATIC LIBRARY libnum7.a: 
  
        g++ -std=c++14 -c num7.cpp # => num.o STATIC LIBRARY (num7.h in the same compiling folder)  
        ar cr libnum7.a num7.o #create archive static library libnum7.a  
  
  To get DYNAMIC LIBRARY libnum7.dylib: 
  
        g++ -std=c++14 -dynamiclib -o libnum7.dylib.1.0.0 num7.cpp # (num7.h in the same compiling folder)  
        ln -s libnum7.dylib.1.0.0 libnum7.dylib.1 #create a soname symbolic link
        ln -s libnum7.dylib.1.0.0 libnum7.dylib  #create a symbolic link for the library num7 name linker
  
  To get num7.dmg: 
  
        hdiutil create -volname "num7" -srcfolder /tmp/num7 -ov -format UDZO num7.dmg (all files to package in /tmp/num7 folder)
      
  To compile app: 
  
        g++ -std=c++14 test_num7_eligibility.cpp -lnum7  
      
