//question: https://leetcode.com/problems/reverse-words-in-a-string/

//brute force using stack 

class Solution {
    public:
        string reverseWords(string s) {
            s += " ";  
            stack<string> st;
            string str = "";
    
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == ' ') {
                    if (!str.empty()) {  
                        st.push(str);
                        str = "";
                    }
                } 
                else {
                    str += s[i];
                }
            }
    
            string ans = "";
    
            // Pop words from the stack to reverse their order
            while (!st.empty()) {
                ans += st.top();
                st.pop();
                if (!st.empty()) {
                    ans += " ";  
                }
            }
    
            return ans;
        }
    };