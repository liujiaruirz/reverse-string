#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
        s[i] = s[i] ^ s[j];
        s[j] = s[i] ^ s[j];
        s[i] = s[i] ^ s[j];
    }
}

int main () {
    string s;
    cout << "Input a string you want to reverse: ";
    cin >> s;
    std::vector<char> stoChar(s.begin(), s.end()); // convert string to char array
    reverseString(stoChar);
    cout << "The reversed string: ";
    for (char c: stoChar) {
        cout << c;
    }
    return 0;
}

