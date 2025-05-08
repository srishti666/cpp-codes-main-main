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


    //optimized
    class Solution {
        public:
            bool isIsomorphic(string s, string t) {
                if (s.length() != t.length()) return false;
                
                int mapST[256], mapTS[256];
                fill(begin(mapST), end(mapST), -1);
                fill(begin(mapTS), end(mapTS), -1);
                
                for (int i = 0; i < s.length(); i++) {
                    char chS = s[i], chT = t[i];
                    
                    if (mapST[chS] == -1 && mapTS[chT] == -1) {
                        mapST[chS] = chT;
                        mapTS[chT] = chS;
                    } else {
                        if (mapST[chS] != chT || mapTS[chT] != chS) {
                            return false;
                        }
                    }
                }
                return true;
            }
        };