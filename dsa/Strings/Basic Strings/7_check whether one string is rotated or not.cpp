//question:https://leetcode.com/problems/rotate-string/

//TC: O(n)
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){ return false;}

        string combine=s+s;
        return combine.find(goal)!=string::npos;
    }
};


//optimized
