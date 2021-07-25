# awesome-cpp-things

### yeslinux-nomac.cpp 
A program that will print something according to the OS using Preprocessors macros( i.e. Linux/Mac/Windows). (CMake)

For Linux `Output`: `This is linux`  
For Mac `Output`: `This is mac`

### compile_time_variable.cpp
A program that assigns value to a variable at the compile time. (TODO:CMake)

Steps:  
run ```g++ -DNAME=\"<Write your name here>\" compile_time_variable.cpp -o output```   
run ```./output```
      
For example:  
run ```g++ -DNAME=\"Rakhi\" compile_time_variable.cpp -o output```  
run ```./output```  
