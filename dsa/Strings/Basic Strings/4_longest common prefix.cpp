//question: https://leetcode.com/problems/longest-common-prefix/


// brute force
// TC: O(m * n)
class Solution {
    public String longestCommonPrefix(String[] strs) {
        String prefix = strs[0];
        for(int index=1;index<strs.length;index++){
            while(strs[index].indexOf(prefix) != 0){
                prefix=prefix.substring(0,prefix.length()-1);
            }
        }
        return prefix;
    }
}


    //another solution TC: O(m*n)

    class Solution {
        public:
            string longestCommonPrefix(vector<string>& strs) {
                string ans = "";
                sort(strs.begin(), strs.end());
                int i=0;
                while(i<strs[0].length() and strs[0][i] == strs[strs.size()-1][i]){
                    ans += strs[0][i];
                    i++;
                }
                return ans;
            }
        };

    