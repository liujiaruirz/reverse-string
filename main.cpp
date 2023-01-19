#include <vector>
#include "reverse_string.cpp"
using namespace std;

int main () {
    Solution solution;
    string s;
    while (1) {
        cout << "Input a string you want to reverse: ";
        getline(cin, s);

        // convert string to char array
        std::vector<char> stoChar1(s.begin(), s.end());
        std::vector<char> stoChar2(s.begin(), s.end());
        std::vector<char> stoChar3(s.begin(), s.end());
        std::vector<char> stoChar4(s.begin(), s.end());
        std::vector<char> stoChar5(s.begin(), s.end());

        // reverse by 5 methods
        solution.reverseString1(stoChar1); 
        solution.reverseString2(stoChar2); 
        solution.reverseString3(stoChar3); 
        solution.reverseString4(stoChar4); 
        solution.reverseString5(stoChar5, 0, stoChar5.size() - 1); 

        // convert vector of char back to string
        string out1(stoChar1.begin(), stoChar1.end()); 
        string out2(stoChar2.begin(), stoChar2.end()); 
        string out3(stoChar3.begin(), stoChar3.end()); 
        string out4(stoChar4.begin(), stoChar4.end()); 
        string out5(stoChar5.begin(), stoChar5.end()); 

        cout << "The reversed string by method 1: "<< out1 << endl;
        cout << "The reversed string by method 2: "<< out2 << endl;
        cout << "The reversed string by method 3: "<< out3 << endl;
        cout << "The reversed string by method 4: "<< out4 << endl;
        cout << "The reversed string by method 5: "<< out5 << endl;
    }
    return 0;
}