//question: https://leetcode.com/problems/reverse-string/

//brute force TC: O(N*N) SC: O(n)

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

    //optimized
    // TC: O(n) SC: O(1)
    class Solution {
        public:
            void reverseString(vector<char>& s) {
                int low = 0;
                int high = s.size()-1;
                while(low < high){
                    swap(s[low], s[high]);
                    low++;
                    high--;
                }
            }
        };
        


