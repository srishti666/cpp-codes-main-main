//question: https://leetcode.com/problems/sort-colors/description/

//TC: O(N) + O(N)  SC: O(1)
//First O(N) for counting the number of 0’s, 1’s, 2’s, and second O(N) for placing them correctly in the original array.
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int count_0 = 0;
            int count_1 = 0;
            int count_2 = 0;
    
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == 0) count_0++;
                else if(nums[i] == 1) count_1++;
                else count_2++;
            }
    
            for(int i=0; i<count_0; i++)
                nums[i] = 0;
            
            for(int i=count_0; i<count_0 + count_1; i++)
                nums[i] = 1;
            for(int i=count_0 + count_1; i<nums.size(); i++)
                nums[i] = 2;
           
        }
    };
    

    //solution 2: Dutch national flag algo TC: O(n)
    void swap(int arr[], int i, int j){
        int temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    
    }
    
    void dnfSort(int arr[], int n){
        int low = 0;
        int mid = 0; 
        int high = n-1;
    
        while(mid<=high){
            if(arr[mid] == 0){
                swap(arr, low, mid);
                mid++;
                low++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else {
                swap(arr, high, mid);
                high--;
            }
        }
    }


    //leetcode

    //Without using swap function

class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int low = 0, mid = 0, high = nums.size()-1;
            while(mid <= high){
                if(nums[mid] == 0){
                    swap(nums[low], nums[mid]);
                    low++;
                    mid++;
                }
                else if(nums[mid] == 1){
                    mid++;
                }
                else{
                    swap(nums[mid], nums[high]);
                    high--;
                }
            }
        }
    };
    