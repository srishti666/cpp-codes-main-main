//question: https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence

//TC: O(N)

class Solution {
    public:
      int countFreq(vector<int>& arr, int target) {
          int n = arr.size();
          int count = 0;
          
          for(int i=0; i<n; i++){
              if(arr[i] == target){
                  count++;
              }
          }
          return count;
      }
  };
  

  //optimised
  //TC: 2*O(logn)

  class Solution {
    public:
    
    int firstOccurence(vector<int>& arr, int target){
          int n = arr.size();
          int low = 0;
          int high = n-1;
          int first = -1;
          
          
          while(low<=high){
              int mid = (low + high)/2;
              if(arr[mid] == target){
                  first = mid;
                  high = mid - 1;
              }
              else if(arr[mid] < target) low = mid + 1;
              else high = mid -1;
          }
          return first;
    }
    
    int lastOccurence(vector<int>& arr, int target){
        int n = arr.size();
          int low = 0;
          int high = n-1;
          int last = -1;
          
          
          while(low<=high){
              int mid = (low + high)/2;
              if(arr[mid] == target){
                  last = mid;
                  low = mid + 1;
              }
              else if(arr[mid] < target) low = mid + 1;
              else high = mid -1;
          }
          return last;
    
    }
    
    
      int countFreq(vector<int>& arr, int target) {
          int first = firstOccurence(arr, target);
          int last = lastOccurence(arr, target);
          if(first == -1) return 0;
          return (last-first+1);
      }
  };