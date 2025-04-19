//question: 

//TC: O(n) + Olog(max(element))

class Solution {
    public: 
        long long calculateTotalHours(vector<int> &piles, int hourly, int h){
            long long totalH = 0;
            int n = piles.size();
            for(int i=0; i<n; i++){
                totalH += ceil((double)piles[i] / (double)hourly);
                if(totalH > h) break;
            }
            return totalH;
        }
    
        int findMax(vector<int> &piles){
            int maxi = INT_MIN;
            int n = piles.size();
            for(int i=0; i<n; i++){
                maxi = max(maxi, piles[i]);
            }
            return maxi;
        }
    
        int minEatingSpeed(vector<int>& piles, int h) {
            int low = 1;
            int high = findMax(piles);
            while(low <= high){
                int mid = (low + high)/2;
                int totalH = calculateTotalHours(piles, mid, h);
                if(totalH <= h) high = mid - 1;
                else low = mid + 1;
            }
            return low;
        }
    };
    
    