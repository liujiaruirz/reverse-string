#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString1(vector<char>& s) {
        /*
        This function uses swap method in C++ standard library.
        swap takes constant time. Therefore, this function takes linear time (O(N/2) = O(N)) to reverse.
        */
        for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
            swap(s[i], s[j]);
        }
    }

    void reverseString2(vector<char>& s) {
        /*
        This function uses reverse method in C++ standard library.
        reverse takes exactly (last - first) / 2 swaps, i.e., O(N/2) = O(N) time.
        */
        reverse(s.begin(), s.end());
    }

    void reverseString3(vector<char>& s) {
        /*
        This function uses bitwise XOR operation to swap values. 
        Since bit XOR takes constant time, the function takes O(N/2) = O(N) time.
        */
        for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
            // Let a be the original value of s[i], b be the original value of s[j]
            s[i] ^= s[j]; // now s[i] == s[i] ^ s[j] == a ^ b; s[j] == b
            s[j] ^= s[i]; // now s[i] == a ^ b; s[j] == s[i] ^ s[j] == a ^ b ^ b == a
            s[i] ^= s[j]; // now s[i] == s[i] ^ s[j] == a ^ b ^ a = b; s[j] == a
        }
    }

    void reverseString4(vector<char>& s) {
        /*
        This function uses tmp as the temporary char value to be swapped.
        The function takes O(N/2) = O(N) (linear) time.
        */
        for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
        }
    }

    void reverseString5(vector<char>& s, int currStart, int currEnd){
        /*
        This function uses recursion to swap corresponding values.
        currStart and currEnd represents the two chars we want to swap.
        It takes O(N/2) = O(N) time complexity.
        Since the call stack can take up to O(N/2) memory space, it also takes O(N) space complexity.
        */

        // base case: when start reaches end, it means we swapped all chars.
        if (currStart >= currEnd) {
            return;
        }
        swap(s[currStart], s[currEnd]);
        reverseString5(s, currStart + 1, currEnd - 1);
    }
};
