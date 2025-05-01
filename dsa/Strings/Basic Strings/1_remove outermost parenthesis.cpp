//question: https://leetcode.com/problems/remove-outermost-parentheses/description/
//Optimized TC: O(n) SC: O(1)
class Solution {
    public:
        string removeOuterParentheses(string s) {
            int n = s.size();
            int count = 0;
            string ans;
            for(int i=0; i<n; i++){
                if(s[i] == '('){
                    if(count > 0) ans += s[i];
                    count++;
                }  
                else if(s[i] == ')'){
                    count--;
                    if(count > 0) ans += s[i];
                }
            }
            return ans;
        }
    };

    //another optimized solution
    class Solution {
        public:
            string removeOuterParentheses(string s) {
                int count = 0;
                string ans = "";
        
                for(int i=0; i<s.length(); i++){
                    if(s[i] == ')') count--;
                    if(count != 0) ans.push_back(s[i]);
                    if(s[i] == '(') count++;
                }
                return ans;
            }
        };