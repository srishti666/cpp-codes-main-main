//question: https://leetcode.com/problems/reverse-string/

//brute force TC: O(N*N)

class Solution {
    public:
        void reverseString(vector<char>& s) {
            vector<char> reversed(s.size());
    
            for (int i = 0; i < s.size(); i++) {
                reversed[i] = s[s.size() - 1 - i];
            }
    
            for (int i = 0; i < s.size(); i++) {
                s[i] = reversed[i];
            }
        }
    };