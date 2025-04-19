// question: https://leetcode.com/problems/move-zeroes/

//{1, 0, 2, 3, 2, 0, 0, 4, 5, 1}
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int insertPosition = 0;
    
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] != 0) {
                    nums[insertPosition] = nums[i];
                    insertPosition++;
                }
            }
    
            while(insertPosition < nums.size()) {
                nums[insertPosition] = 0;
                insertPosition++;
            }
        }
    };


    //solution: 2
    class Solution {
        public:
            void moveZeroes(vector<int>& nums) {
                vector<int> temp;
                for(int i=0; i<nums.size(); i++){
                    if(nums[i] != 0){
                        temp.push_back(nums[i]);
                    }
                }
                //size of temp array(number of non zero element)
                int nz = temp.size();
        
                //putting the non zero element back in original array
                for(int i=0; i<nz; i++){
                    nums[i] = temp[i];
                }
        
                //filling the remaining space with zeros
                for(int i=nz; i<nums.size(); i++){
                    nums[i] = 0;
                }
            }
        };
        
        //O(N) + O(X) + O(N-X) ~ O(2*N), where N = total no. of elements,
        // X = no. of non-zero elements, and N-X = total no. of zeros.

        // {1, 0, 2, 3, 2, 0, 0, 4, 5, 1}        
        //Solution 3 : Time complexity: O(n). using 2 pointers
        // Space complexity: O(1).
            class Solution {
                public:
                    void moveZeroes(vector<int>& nums) {
                        int j = 0;
                        for (int i = 0; i < nums.size(); i++) {
                            if (nums[i] != 0) {
                                swap(nums[i], nums[j]);
                                j++;
                            }
                        }
                    }
                };



      
    

