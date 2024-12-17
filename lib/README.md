# STATIC AND DYNAMIC LIBRARIES  

  It may need: 
        
        mkdir -p /usr/local/lib (libnum7.a and libnum7.dylib files position on system)      
        export DYLD_LIBRARY_PATH=/usr/local/lib:$DYLD_LIBRARY_PATH (runtime environment variable)  
 
  To get libnum7.a: 
  
        g++ -c num7.cpp # => num.o STATIC LIBRARY (num7.h in the same compiling folder)  
        ar cr libnum7.a num7.o #create archive static library libnum7.a  
  
  To get num7.dmg: 
  
        hdiutil create -volname "num7" -srcfolder /tmp/num7 -ov -format UDZO num7.dmg  
      
  To compile app: 
  
        g++ -std=c++14 test_num7_eligibility.cpp -lnum7  
      
