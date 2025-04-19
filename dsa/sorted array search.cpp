//question: https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win

// arr[] = [1, 2, 4, 5, 6], k = 3  -> false
// arr[] = [1, 2, 3, 4, 6], k = 6  -> true

// TC: O(n) 
class Solution {
    public:
      // Function to find element in sorted array
      // arr: input array
      // k: element to be searched
      bool searchInSorted(vector<int>& arr, int k) {
  
          for(int i=0; i<arr.size(); i++){
              if(arr[i] == k){
                  return true;
              } 
          }
          return false;
      }
  };

  //using for each loop
  class Solution {
    public:
      bool searchInSorted(vector<int>& arr, int k) {
  
          for(int x: arr){
              if(x == k)
              return true;
          }
          return false;
      }
  };