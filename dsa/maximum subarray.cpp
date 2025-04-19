//question: https://leetcode.com/problems/maximum-subarray

//TC:O(n^2)

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int n = nums.size(), ans = INT_MIN;
            for(int i = 0; i < n; i++) {
            int sum =0;
                for(int j = i; j < n ; j++) {
                    sum += nums[j],
                    ans = max(ans, sum); 
                }      
            } 
            return ans;
        }
    };

//Kadane's algorithm (optimal)
//TC: O(n)  SC: O(1)
class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int maxi = INT_MIN;
            int sum =0;
    
            for(int i=0; i<nums.size(); i++){
                sum += nums[i];
    
                if(sum > maxi) maxi = sum;
    
                if(sum < 0) sum = 0;
     
            }
            return maxi;
        }
    };


    //Follow up question: print the subarray
    class Solution {
        public:
            int maxSubArray(vector<int>& nums) {
                int maxi = INT_MIN;
                int ans;
                int ansStart = -1;
                int ansEnd = -1;

                for(int i=0; i< nums.size(); i++){
                    if(sum == 0)
                    int start = i;
                    ans += nums[i];
                    if(sum > maxi) {
                        maxi = sum;
                        ansStart = start, ansEnd = i;

                    }

                    if(sum<0){
                        sum = 0;
                    }
                }

            }}

