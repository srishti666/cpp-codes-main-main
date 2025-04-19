//question: https://leetcode.com/problems/rearrange-array-elements-by-sign/

//TC: O(n+n)   SC: O(n/2 + n/2)-> O(n)
class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            vector<int> pos;
            vector<int> neg;
            int n = nums.size();
            for(int i=0; i<n; i++){
                if(nums[i] > 0) pos.push_back(nums[i]);
                else neg.push_back(nums[i]);
            }
    
            for(int i=0; i<n/2; i++){
                nums[2*i] = pos[i];
                nums[2*i+1] = neg[i];
            }
            return nums;
        }
    };

//TC: O(n)   SC: O(n)
class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            int n = nums.size();
            vector<int>ans(n,0);
    
            int posIndex = 0, negIndex = 1;
            for(int i=0; i<n; i++){
                if(nums[i] > 0){
                    ans[posIndex] = nums[i];
                    posIndex += 2;
                }
                else {
                    ans[negIndex] = nums[i];
                    negIndex += 2;
                }
            }
            return ans;
        }
    };

    //2nd variant: also add the remaining numbers {1,2,-4,-5, 3, 7};

//TC: O(n)+ O(max(pos, neg)) + O(leftovers) => O(n)+O()+ O(0)-> O(2n)
//   SC: O(n)
#include<bits/stdc++.h>
using namespace std;

  vector<int> RearrangebySign(vector<int>A){
    
  int n = A.size();
  
  vector<int> pos;
  vector<int> neg;
  
  for(int i = 0;i<n;i++){
      if(A[i] > 0) pos.push_back(A[i]);
      else neg.push_back(A[i]);
  }
  
  if(pos.size() > neg.size()){
      for(int i=0; i<neg.size(); i++){
        A[2*i] = pos[i];
        A[2*i+1] = neg[i];
      }
      int Index= neg.size()*2;
      for(int i=neg.size(); i<pos.size(); i++){
          A[Index] = pos[i];
          Index++;
      }
  }
  else{
      for(int i=0; i<pos.size(); i++){
        A[2*i] = pos[i];
        A[2*i+1] = neg[i];
      }
      int Index= pos.size()*2;
      for(int i=pos.size(); i<neg.size(); i++){
          A[Index] = neg[i];
          Index++;
      }
  }
  return A;
    
}

int main() {
    
  // Array Initialisation.
  
  vector<int> A = {1,2,-4,-5, -3, -7, 4};

  vector<int> ans = RearrangebySign(A);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}