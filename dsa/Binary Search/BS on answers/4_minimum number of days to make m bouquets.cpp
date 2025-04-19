//question: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/
//Brute force
//TC: O((max(arr[])-min(arr[])+1) * N)
class Solution {
    public:
        bool possible(vector<int>& bloomDay, int day, int m, int k){
            int n = bloomDay.size();
            int noOfB = 0;
            int count = 0;
            for(int i=0; i<n; i++){
                if(bloomDay[i] <= day) count++;
                else {
                    noOfB += (count/k);
                    count = 0;
                }
            }
            noOfB += (count / k);
            return noOfB >= m;
        }
    
        int minDays(vector<int>& bloomDay, int m, int k) {
            long long val = m * 1ll * k * 1ll;
            int n = bloomDay.size(); //size of the array
            if (val > n) return -1; //impossible case.
            //find maximum and minimum:
            int mini = INT_MAX, maxi = INT_MIN;
            for (int i = 0; i < n; i++) {
                mini = min(mini, bloomDay[i]);
                maxi = max(maxi, bloomDay[i]);
            }
    
            for (int i = mini; i <= maxi; i++) {
                if (possible(bloomDay, i, m, k))
                    return i;
            }
            return -1;
        }
    };


    //optimized  TC: O(n)* O(log(max(arr)-min(arr)+1))
    // O(log(max(arr[])-min(arr[])+1) * N) same
    //binary search


    class Solution {
        public:
            bool possible(vector<int>& bloomDay, int day, int m, int k){
                int n = bloomDay.size();
                int noOfB = 0;
                int count = 0;
                for(int i=0; i<n; i++){
                    if(bloomDay[i] <= day) count++;
                    else {
                        noOfB += (count/k);
                        count = 0;
                    }
                }
                noOfB += (count / k);
                return noOfB >= m;
            }
        
            int minDays(vector<int>& bloomDay, int m, int k) {
                long long val = m * 1ll * k * 1ll;
                if(val > bloomDay.size()) return -1;
                int mini = INT_MAX, maxi = INT_MIN;
                for(int i=0; i<bloomDay.size(); i++){
                    mini = min(mini, bloomDay[i]);
                    maxi = max(maxi, bloomDay[i]);
                }
                int low = mini, high = maxi;
                while(low <= high){
                    int mid = (low + high)/2;
                    if(possible(bloomDay, mid, m, k)){
                        high = mid - 1;
                    }
                    else low = mid + 1;
                }
                return low;
            }
        };