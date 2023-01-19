#include <vector>
#include "reverse_string.cpp"
using namespace std;

int main () {
    Solution solution;
    cout << "Input string: \"Hello, World\"" << endl;
    string s0 = "Hello, World";

    cout << "Solution 1 output: ";
    vector<char> charVector01(s0.begin(), s0.end());
    solution.reverseString1(charVector01);
    string out01(charVector01.begin(), charVector01.end()); 
    cout << out01 << endl;
    
    cout << "Solution 2 output: ";
    vector<char> charVector02(s0.begin(), s0.end());
    solution.reverseString2(charVector02);
    string out02(charVector02.begin(), charVector02.end()); 
    cout << out02 << endl;

    cout << "Solution 3 output: ";
    vector<char> charVector03(s0.begin(), s0.end());
    solution.reverseString3(charVector03);
    string out03(charVector03.begin(), charVector03.end()); 
    cout << out03 << endl;

    cout << "Solution 4 output: ";
    vector<char> charVector04(s0.begin(), s0.end());
    solution.reverseString4(charVector04);
    string out04(charVector04.begin(), charVector04.end()); 
    cout << out04 << endl;

    cout << "Solution 5 output: ";
    vector<char> charVector05(s0.begin(), s0.end());
    solution.reverseString5(charVector05, 0, s0.size() - 1);
    string out05(charVector05.begin(), charVector05.end()); 
    cout << out05 << endl;

    cout << "----------------------------------------------------------" << endl;

    cout << "Input string: \"\\n\\\"" << endl;
    string s1 = "\\n";

    cout << "Solution 1 output: ";
    vector<char> charVector11(s1.begin(), s1.end());
    solution.reverseString1(charVector11);
    string out11(charVector11.begin(), charVector11.end()); 
    cout << out11 << endl;
    
    cout << "Solution 2 output: ";
    vector<char> charVector12(s1.begin(), s1.end());
    solution.reverseString2(charVector12);
    string out12(charVector12.begin(), charVector12.end()); 
    cout << out12 << endl;

    cout << "Solution 3 output: ";
    vector<char> charVector13(s1.begin(), s1.end());
    solution.reverseString3(charVector13);
    string out13(charVector13.begin(), charVector13.end()); 
    cout << out13 << endl;

    cout << "Solution 4 output: ";
    vector<char> charVector14(s1.begin(), s1.end());
    solution.reverseString4(charVector14);
    string out14(charVector14.begin(), charVector14.end()); 
    cout << out14 << endl;

    cout << "Solution 5 output: ";
    vector<char> charVector15(s1.begin(), s1.end());
    solution.reverseString5(charVector15, 0, s1.size() - 1);
    string out15(charVector15.begin(), charVector15.end()); 
    cout << out15 << endl;

    cout << "----------------------------------------------------------" << endl;

    cout << "Input string: \"1 2 3\"" << endl;
    string s2 = "1 2 3";

    cout << "Solution 1 output: ";
    vector<char> charVector21(s2.begin(), s2.end());
    solution.reverseString1(charVector21);
    string out21(charVector21.begin(), charVector21.end()); 
    cout << out21 << endl;
    
    cout << "Solution 2 output: ";
    vector<char> charVector22(s2.begin(), s2.end());
    solution.reverseString2(charVector22);
    string out22(charVector22.begin(), charVector22.end()); 
    cout << out22 << endl;

    cout << "Solution 3 output: ";
    vector<char> charVector23(s2.begin(), s2.end());
    solution.reverseString3(charVector23);
    string out23(charVector23.begin(), charVector23.end()); 
    cout << out23 << endl;

    cout << "Solution 4 output: ";
    vector<char> charVector24(s2.begin(), s2.end());
    solution.reverseString4(charVector24);
    string out24(charVector24.begin(), charVector24.end()); 
    cout << out24 << endl;

    cout << "Solution 5 output: ";
    vector<char> charVector25(s2.begin(), s2.end());
    solution.reverseString5(charVector25, 0, s2.size() - 1);
    string out25(charVector25.begin(), charVector25.end()); 
    cout << out25 << endl;

    cout << "----------------------------------------------------------" << endl;

    return 0;
}