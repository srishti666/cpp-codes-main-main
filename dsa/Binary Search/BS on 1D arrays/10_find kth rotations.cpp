//question: https://www.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation

//TC: O(logn)

class Solution {
    public:
      int findKRotation(vector<int> &arr) {
          int n = arr.size();
          int low = 0;
          int high = n - 1;
          int ans = INT_MAX;
          int index = -1;
          
          while(low <= high){
              int mid = (low + high);
              //left half is sorted
             
              if(arr[low] <= arr[mid]){
                  if(arr[low] < ans){
                      ans = arr[low];
                      index = low;
                  }
                  low = mid + 1;
              }
              else if(arr[mid] <= arr[high]){
                  if(arr[mid] < ans){
                      ans = arr[low];
                      index = mid;
                  }
                  high = mid - 1;
              }
              
          }
          return index;
      }
  };