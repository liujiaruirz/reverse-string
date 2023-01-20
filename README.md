# Reverse String
This repository provides five different methods in C++ to reverse a string.
When receiving a string, the program firstly convert it to a vector of char, then call the functions in _reverse_string.cpp_ to reverse the vector __in-place__. Finally, the program converts the reversed vector back to string and print out.

## Usage of Functions
All functions take a vector of chars and reverse the vector in-place (that is, the functions do not return anything but alter the input itself). To convert a string s to a vector of chars, simply use 
```
vector<char> v(s.begin(), s.end());
```
Then call function. For example,
```
reverseString1(v);
```
To convert vector back to string, use
```
string out(v.begin(), v.end()); 
```
(Please note that the conversions above are already implemented in the main function.)

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
All functions take O(N/2) = O(N), i.e., linear time complexity. For space complexity, all functions take O(1) constant memory space, except for function 5 (using recursion), which generates call stack of O(N/2) space.
