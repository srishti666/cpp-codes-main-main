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



//another
class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            sort(strs.begin(),strs.end());
            int a=strs.size();
            string n=strs[0],m=strs[a-1],ans="";
            for(int i=0;i<n.size();i++){
                if(n[i]==m[i]){ans+=n[i];}
                else break;
            }
            return ans;
            
        }
    };