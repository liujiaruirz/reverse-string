#include <vector>
#include "reverse_string.cpp"
using namespace std;

int main () {
    Solution solution;

    cout << "----------------------------------------------------------" << endl;
    cout << "Unit test for solution 1 with input string: \"Hello, World\"" << endl;
    std::vector<char> charVector1 { 'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd' };
    solution.reverseString1(charVector1);
    cout << "The reversed string: ";
    for (char c: charVector1) {
        cout << c;
    }
    cout << endl;
    
    cout << "----------------------------------------------------------" << endl;
    cout << "Unit test for solution 2 with input string: \"Hello, World\"" << endl;
    std::vector<char> charVector2 { 'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd' };
    solution.reverseString2(charVector2);
    cout << "The reversed string: ";
    for (char c: charVector2) {
        cout << c;
    }
    cout << endl;

    cout << "----------------------------------------------------------" << endl;
    cout << "Unit test for solution 3 with input string: \"Hello, World\"" << endl;
    std::vector<char> charVector3 { 'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd' };
    solution.reverseString3(charVector3);
    cout << "The reversed string: ";
    for (char c: charVector3) {
        cout << c;
    }
    cout << endl;

    cout << "----------------------------------------------------------" << endl;
    cout << "Unit test for solution 4 with input string: \"Hello, World\"" << endl;
    std::vector<char> charVector4 { 'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd' };
    solution.reverseString4(charVector4);
    cout << "The reversed string: ";
    for (char c: charVector4) {
        cout << c;
    }
    cout << endl;

    cout << "----------------------------------------------------------" << endl;
    cout << "Unit test for solution 5 with input string: \"Hello, World\"" << endl;
    std::vector<char> charVector5 { 'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd' };
    solution.reverseString5(charVector5, 0, charVector5.size() - 1);
    cout << "The reversed string: ";
    for (char c: charVector5) {
        cout << c;
    }
    cout << endl;

    cout << "----------------------------------------------------------" << endl;
    return 0;
}