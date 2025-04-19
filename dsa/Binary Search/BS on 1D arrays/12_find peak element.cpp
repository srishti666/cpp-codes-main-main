//question: https://leetcode.com/problems/find-peak-element/description/

//TC: O(n)
class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int n = nums.size();
            for(int i=0; i<n-1; i++){
                if(nums[i] > nums[i+1]){
                    return i;
                }
            }
            return n-1;
        }
    };


//TC: O(logn)
class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int n = nums.size();
            int low = 0;
            int high = n - 1;
            int maxi = INT_MIN;
    
            while(low < high){
                int mid = (low + high)/2;
                if(nums[mid] > nums[mid + 1]){
                    high = mid;
                }
                else low = mid + 1 ;
            }
            return low;
        }
    };