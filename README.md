# Reverse String
This repository provides five different methods in C++ to reverse a string.
When receiving a string, the program firstly convert it to a vector of char, then call the functions in _reverse_string.cpp_ to reverse the vector __in place__. Finally, the program converts the reversed vector back to string and print out.

## Compile/Run Instructions
### Reverse a String Main Program
To Compile:
```
g++ -std=c++11 -o main main.cpp
```
To Run:
```
./main
```

### Unit Tests
To Compile:
```
g++ -std=c++11 -o test test.cpp
```
To Run:
```
./test
```

## Time/Space Complexity Analysis
All functions take O(N/2) = O(N), i.e., linear time complexity. For space complexity, all functions also take O(N/2) = O(N) memory space, except for function 5 (using recursion), which generates call stack of O(N/2) space.
