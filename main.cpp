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

        solution.reverseString1(stoChar);
        cout << "The reversed string: ";
        for (char c : stoChar) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}