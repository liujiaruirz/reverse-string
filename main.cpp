#include <vector>
#include "reverse_string.cpp"
using namespace std;

int main () {
    Solution solution;
    while (1) {
        string s;
        cout << "Input a string you want to reverse: ";
        getline(cin, s);

        // reverse by 5 methods
        string out1 = solution.reverseString(s, 1);
        string out2 = solution.reverseString(s, 2);
        string out3 = solution.reverseString(s, 3);
        string out4 = solution.reverseString(s, 4);
        string out5 = solution.reverseString(s, 5);

        cout << "The reversed string by method 1: "<< out1 << endl;
        cout << "The reversed string by method 2: "<< out2 << endl;
        cout << "The reversed string by method 3: "<< out3 << endl;
        cout << "The reversed string by method 4: "<< out4 << endl;
        cout << "The reversed string by method 5: "<< out5 << endl;
    }
    return 0;
}