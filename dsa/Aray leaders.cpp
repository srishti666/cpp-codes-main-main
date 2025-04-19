//question:https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array

// TC: O(n^2) SC: O(n)  TLE
class Solution {
    public:
      vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
    
      for (int i = 0; i < n; i++) {
      bool leader = true;
  
      for (int j = i + 1; j < n; j++)
        if (arr[j] > arr[i]) {
            
          // If any element found is greater than current leader
          // curr element is not the leader.
          leader = false;
          break;
        }
  
      if (leader)
      ans.push_back(arr[i]);
  
    }
    
    return ans;
      }
  };


//TC: O(n) + O(nlogn) for sort and O(n) to reverse 
//SC: O(n) to return the ans in case of worst case where everyone is a leader, to solve the prblm it is O(1)
class Solution {
    public:
      vector<int> leaders(vector<int>& arr) {
          int maxi = INT_MIN;
          int n = arr.size();
          vector<int> ans;
          
          for(int i=n-1; i>=0; i--){
              
              if(arr[i]>=maxi){
                  ans.push_back(arr[i]); 
              } 
              maxi = max(maxi, arr[i]);
          }
          reverse(ans.begin(), ans.end());
          // sort(ans.begin(), ans.end());   O(nlogn)
          return ans;
      }
  };