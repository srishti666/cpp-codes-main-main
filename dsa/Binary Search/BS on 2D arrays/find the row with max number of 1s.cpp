//question: https://leetcode.com/problems/row-with-maximum-ones/description/


//brute force  TC:  O(n X m)
class Solution {
    public:
        vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
            int n = mat.size(); // Number of rows
            int m = mat[0].size(); // Number of cols
    
            int cnt_max = 0;
            int index = 0;
    
            for(int i=0; i<n; i++){
                int cnt_ones = 0;
                for(int j = 0; j<m; j++){
                    cnt_ones += mat[i][j];
                }
                    if(cnt_ones > cnt_max){
                        cnt_max = cnt_ones;
                        index = i;
                    }
                }
                return {index,cnt_max} ;
        }
    };
/*

    [0, 1, 1, 1],
    [1, 1, 1, 1],
    [0, 0, 0, 0],
    [0, 1, 1, 1]
    
    */


    //optimized


class Solution {
public:
int lowerBound(vector<int> &arr, int x){
    int n=arr.size();
    int low=0;
    int high = n-1;
    sort(arr.begin(),arr.end());
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid] >= x){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int maxCount=0;
        int index=0;
        vector<int> ans;
        for(int i=0; i<m; i++){
            int onesCount = n-lowerBound(mat[i], 1);
            if(onesCount > maxCount){
                maxCount = onesCount;
                index=i;
            }
        }
        return {index, maxCount};
    }
};