//question: 

//brute force -- TLE 

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