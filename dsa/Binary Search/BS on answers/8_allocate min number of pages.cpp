//question: 
//Brute force
// TC: O(N * (sum(arr[])-max(arr[])+1)), where N = size of the array, sum(arr[]) = sum of all array elements, max(arr[]) = maximum of all array elements.
class Solution {
    public:
    
    int countOfStudents(vector<int> &arr, int pages){
        int n = arr.size();
        int students = 1;
        long long pagesStudents = 0;
        
        for(int i = 0; i<n; i++){
            if((pagesStudents + arr[i]) <= pages){
                pagesStudents += arr[i];
            }
            else students++;
            pagesStudents = arr[i];
        }
        return students;
    }
      int findPages(vector<int> &arr, int k) {
          if(arr.size() < k) return -1;
          
          int low = *max_element(arr.begin(), arr.end()); 
          int high = accumulate(arr.begin(), arr.end(), 0);
          
          for(int pages = low; pages<= high; pages++){
              if(countOfStudents(arr, pages) == k) return pages;
          }
          return low;
      }
  };