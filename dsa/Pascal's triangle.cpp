//question: https://leetcode.com/problems/pascals-triangle/


int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}

//question: https://leetcode.com/problems/pascals-triangle/

//TC: O(n*n)

class Solution {
    public:
        vector<int> fun(int n){
          vector<int> v;
          v.push_back(1);
          int res=1;
          for(int i=1;i<n;i++){
              res=res*(n-i);
              res=res/i;
              v.push_back(res);
          }  
          return v;
        }
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> ans;
            for(int i=0;i<numRows;i++){
                vector<int> temp;
                temp=fun(i+1);
                ans.push_back(temp);
            }
            return ans;
        }
    };