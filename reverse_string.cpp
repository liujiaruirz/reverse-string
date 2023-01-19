#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void reverseString1(vector<char>& s) {
        for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
            swap(s[i], s[j]);
        }
    }

    void reverseString2(vector<char>& s) {
        reverse(s.begin(), s.end());
    }

    void reverseString3(vector<char>& s) {
        for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
            s[i] ^= s[j];
            s[j] ^= s[i];
            s[i] ^= s[j];
        }
    }

    void reverseString4(vector<char>& s) {
        for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
        }
    }

    void reverseString5(vector<char>& s, int currStart, int currEnd){
        if (currStart >= currEnd) {
            return;
        }
        swap(s[currStart], s[currEnd]);
        reverseString5(s, currStart + 1, currEnd - 1);
    }
};
