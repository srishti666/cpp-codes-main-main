//question: https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=ceil-the-floor

//find lower as well as upper bound

//TC: O(nlogn)+O(n)   SC: O(n)
class Solution {
    public:
      vector<int> getFloorAndCeil(int x, vector<int> &arr) {
          vector<int> ans;
          int n = arr.size();
          int floor = -1;
          int ceil = -1;
  
          sort(arr.begin(), arr.end());
          for(int i=0; i<n; i++){
              if(arr[i] <= x){
                  floor = arr[i]; 
              } 
              if(arr[i] > x){
                  ceil = arr[i]; 
                  break;
              } 
              if(arr[i] == x) return {x, x};
          }
          ans.push_back(floor);
          ans.push_back(ceil);
          return ans;
          
      }
  };

  //using binary search

  class Solution {
    public:
      vector<int> getFloorAndCeil(int x, vector<int> &arr) {
          sort(arr.begin(), arr.end());
          int n = arr.size();
          int low = 0; 
          int high = n -1;
          int floor = -1;
          int ceil = -1;
          
          while(low <= high){
              int mid = (low+high)/2;
              if(arr[mid] == x) {
                  return {x, x};
              }
              else if(arr[mid] <= x)  {
                  floor = arr[mid];
                  low = mid + 1;
              }
              else if(arr[mid] >= x){
                  ceil = arr[mid];
                  high = mid - 1;
              }
                  
          }
          return {floor, ceil};
      }
      
  };