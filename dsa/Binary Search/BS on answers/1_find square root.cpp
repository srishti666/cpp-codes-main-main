//question:https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root
//Brute-force-> TC: O(n)

class Solution {
    public:
      int floorSqrt(int n) {
          int ans = 0;
          for(int i=0; i<=n; i++){
              long long val = i*i;
              //one l l
              if(val <= n*1ll) {  
                  ans = i;
              }
              else {
                  break;
              }
              
          }
          return ans;
      }
  };

  //another brute force solution
  class Solution {
    public:
      int floorSqrt(int n) {
        int i=1;
        while(i*i <= n){
            i++;
        }
        return i-1;
      }
    }

    //binary search  TC: O(logn)

    class Solution {
        public:
          int floorSqrt(int n) {
             int low = 0;
             int high = n;
             int ans = 1;
             
             while(low <= high){
                 int mid = (low + high)/2;
                 if(mid * mid <= n){
                     ans = mid;
                     low = mid + 1;
                 }
                 else{
                     high = mid - 1;
                 }
                 
             }
             return ans;
             
          }
      };
      

