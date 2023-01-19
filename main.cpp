#include <vector>
#include "reverse_string.cpp"
using namespace std;

int main () {
    Solution solution;
    string s;
    while (1) {
        cout << "Input a string you want to reverse: ";
        getline(cin, s);

        std::vector<char> stoChar(s.begin(), s.end()); // convert string to char array
        solution.reverseString1(stoChar); // reverse
        string out(stoChar.begin(), stoChar.end()); // convert vector of char back to string

        cout << "The reversed string: "<< out << endl;
    }
    return 0;
}