# Reverse String
This repository provides five different methods in C++ to reverse a string.

When receiving a string, the wrapper function _reverseString_ firstly converts the string to a vector of char, then call the reverse functions to reverse the vector __in-place__. Finally, the function converts the reversed vector back to string and return.

## Usage of Functions
The function reverseString takes two args: string s and integer method. To use the function, give it the string and specify the method you want to use (from 1 to 5). It returns the converted string.

Example:
```cpp
#include "reverse_string.cpp"
using namespace std;

int main() {
    Solution solution;
    string s = "HelloWorld";
    string sRev = solution.reverseString(s, 1);
    return 0
}
```

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
The unit tests are designed to test the reverse functions.

To Compile:
```
g++ -std=c++11 -o test test.cpp
```
To Run:
```
./test
```

## Time/Space Complexity Analysis
All reverse functions take O(N/2) = O(N), i.e., linear time complexity. For space complexity, all reverse functions take O(1) constant memory space, except for function 5 (using recursion), which generates call stack of O(N/2) space.
