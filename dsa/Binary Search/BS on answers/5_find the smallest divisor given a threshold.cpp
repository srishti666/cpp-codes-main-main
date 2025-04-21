//question: 

//brute force -- TLE 
//TC: O(max(nums) * n)
class Solution {
    public:
        int smallestDivisor(vector<int>& nums, int threshold) {    
        int maxNum = *max_element(nums.begin(), nums.end());
        
        for (int i = 1; i <= maxNum; ++i) {
            int sum = 0;
            for (int num : nums) {
                sum += (num + i - 1) / i; // This is equivalent to ceil(num / i)
            }
            if (sum <= threshold) {
                return i;
            }
        }
        
        return maxNum; 
    }
}


//optimized
//TC: O(log(max) * n)

class Solution {
    public:
        int sumOfDivisions(vector<int>& nums, int divisor) {
            int sum = 0;
            for(int i=0; i<nums.size(); i++){
                sum = sum + ceil((double(nums[i])/double(divisor)));
            }
            return sum;
        }
        int smallestDivisor(vector<int>& nums, int threshold) {
            int low = 1, high = *max_element(nums.begin(), nums.end());
            int ans = 0;
            while(low <= high){
                int mid = (low + high)/2;
                if(sumOfDivisions(nums, mid) <= threshold){
                    ans = mid;
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            return ans;
        }
    };