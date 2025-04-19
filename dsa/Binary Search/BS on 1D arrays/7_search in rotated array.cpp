//qyestion

//TC: O(n)  brute force-> linear search

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int ind=-1;
            for(int i =0; i<nums.size(); i++){
                if(nums[i] == target) ind = i;
            }
            return ind;
        }
    };


    //optimised solution
    //TC: O(logn)

    class Solution {
        public:
            int search(vector<int>& nums, int target) {
                int n = nums.size();
                int low = 0;
                int high = n-1;
        
                while(low <= high){
                    int mid = (low+high)/2;
        
                    if(nums[mid] == target) return mid;

                    //check if the left side of the array is sorted or not by chceking whether they are consecutive or not
                    //left sorted
                    if(nums[low] <= nums[mid]){
                        if(nums[low] <= target && target <= nums[mid]) {
                            high = mid - 1;
                        }
                        else low = mid + 1;
                    }
                    //right sorted
                    else{
                        if(nums[mid] <= target && target <= nums[high]) {
                            low = mid + 1;
                        }
                        else high = mid - 1;
                    }
                }
                return -1;
            }
        };