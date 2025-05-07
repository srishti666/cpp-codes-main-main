//question: https://leetcode.com/problems/longest-common-prefix/description/


class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            if(s.length() != t.length()) return false;
    
            int size=s.length();
            for(int i=0;i<size;i++){
                char first=s[i];
                char second=t[i];
    
                for(int j=i;j<size;j++){
                    if(s[j]==first && t[j]!=second){
                        return false;
                    }
                     if (t[j] == second && s[j] != first)
                {
                    return false;
                }
                }
    
            }
            return true;
        }
    };