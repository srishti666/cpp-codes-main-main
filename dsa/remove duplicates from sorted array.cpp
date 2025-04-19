// question: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

//brute force: O(nlogn + n)
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            set <int> set;
            for(int i=0; i<nums.size(); i++){
                set.insert(nums[i]);   //O(nlogn)
            }
    
            int k = set.size();
            int j = 0;
            for (int x: set) {   //O(n)
                nums[j++] = x;
            }        
            return k;
        }
    };

//optimal 
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int i = 0;
            for(int j=0; j<nums.size(); j++)
            if(nums[j] != nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
            return i+1;
        }}
