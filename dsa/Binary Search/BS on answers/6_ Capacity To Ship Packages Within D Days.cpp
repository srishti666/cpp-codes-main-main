//question:https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

//brute force 
// TC:  O(N * (sum(weights[]) - max(weights[]) + 1)) 

class Solution {
    public:
    
        int findDays(vector<int> & weights, int cap){
            int days = 1;
            int load = 0;
            int n = weights.size();
            for(int i = 0; i< n; i++){
                if(load + weights[i] > cap){
                    days++;
                    load = weights[i];
                }
                else load += weights[i];
            }
            return days;
        }
        int shipWithinDays(vector<int>& weights, int days) {
            int maxi = *max_element(weights.begin(), weights.end());
            int sum = accumulate(weights.begin(), weights.end(), 0);
    
            
            for (int i = maxi; i <= sum; i++) {
                if (findDays(weights, i) <= days) {
                    return i;
                }
            }
            return -1;
        }
    };


    //optimized solution using binary search
    //RC:  O(N * log(sum(weights[]) - max(weights[]) + 1))
    class Solution {
        public:
        
            int findDays(vector<int> & weights, int cap){
                int days = 1;
                int load = 0;
                int n = weights.size();
                for(int i = 0; i< n; i++){
                    if(load + weights[i] > cap){
                        days++;
                        load = weights[i];
                    }
                    else load += weights[i];
                }
                return days;
            }
            int shipWithinDays(vector<int>& weights, int days) {
                int maxi = *max_element(weights.begin(), weights.end());
                int sum = accumulate(weights.begin(), weights.end(), 0);
        
                int low = maxi;
                int high = sum;
                while(low <= high){
                    int mid = (low + high)/2;
                    if(findDays(weights, mid) <= days){
                        high = mid - 1;
                    }
                    else low = mid + 1;
                }
                return low;
            }
        };