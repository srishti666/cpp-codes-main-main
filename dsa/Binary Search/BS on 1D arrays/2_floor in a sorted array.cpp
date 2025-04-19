//question: https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%253BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array

//TC: O(n)
class Solution {
    public:
  
      int findFloor(vector<int>& arr, int x) {
          int n = arr.size();
          int floor = -1;
  
          for(int i=0; i<n; i++){
            if(arr[i] <= x)
                floor = i;
            else break;
            }
            return floor;
      }
  };


  //Optimise solution using binary search
  //    TC: O(log n)

  class Solution {
    public:
    int findFloor(vector<int>& arr, int x) {
        int n = arr.size();
        int low = 0; 
        int high = n-1;
        int floor = -1;

        while(low <= high){
            int mid = (low+high)/2;
            if(arr[mid] <= x) {
                floor = mid;
                low = mid+1
            }
            else high = mid-1;
        }
        return floor;
   
    }
<<<<<<< HEAD
  }
=======
  }
>>>>>>> 37257aa64c36c62ccb40ca1d42f41e0f897e754c
