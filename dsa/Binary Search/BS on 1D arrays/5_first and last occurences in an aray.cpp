//question: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

//TC: O(n) using linear search
class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int first = -1;
            int last = -1;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == target){
                    if(first == -1){first = i;} 
                    last = i;
                }
            }
            return {first, last};
        }
    };


    //Optimised approach
    //TC: 2*O(logn)

    class Solution {
        public:
            int firstOccurence(vector<int>& nums, int target){
                int n = nums.size();
                int low = 0;
                int high = n-1;
                int first = -1;
        
                while(low <= high){
                    int mid = (low + high)/2;
                    if(nums[mid] == target){
                        first = mid;
                        high =  mid - 1;
                    }
                    else if(nums[mid] < target)low = mid + 1;
                    else high = mid - 1;
                }
                return first;
            }
        //last occurence
            int lastOccurence(vector<int>& nums, int target){
                int n = nums.size();
                int low = 0;
                int high = n-1;
                int last = -1;
        
                while(low <= high){
                    int mid = (low + high)/2;
                    if(nums[mid] == target){
                        last = mid;
                        low =  mid + 1;
                    }
                    else if(nums[mid] < target)low = mid + 1;
                    else high = mid - 1;
                }
                return last;
            }
            vector<int> searchRange(vector<int>& nums, int target) {
                int first = firstOccurence(nums, target);
                if(first == -1) return { -1, -1};
                int last = lastOccurence(nums, target);
                return {first, last};
            }
        };