//question: https://leetcode.com/problems/kth-missing-positive-number/


//brute force TC: O(n)
class Solution {
    public:
    
        int findKthPositive(vector<int>& arr, int k) {
            for(int i=0; i<arr.size(); i++){
                if(arr[i] <= k) k++;
                else break;
            }
            return k;
        }
    };