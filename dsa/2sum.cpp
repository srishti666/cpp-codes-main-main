//question: https://leetcode.com/problems/two-sum/description/

// TC: O(N*N)
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return { -1, -1};
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}


// TC: O(n*logn) using hashmap SC: O(n) dumping elements in hashmap

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            map<int, int> map;
            int n = nums.size();
    
            for(int i=0; i<n; i++){
                int a = nums[i];
                int rem = target - nums[i];
                if(map.find(rem) != map.end()){
                   return {map[rem], i};
                }
                map[a] = i;
            }
            return {-1, -1};
        }
    };

    //2nd Variant
    //TC: O(n)->hashmap + O(nlogn)-> sorting
    //SC: O(1)

    class Solution {
        public:
            vector<int> twoSum(vector<int>& nums, int target) {
                sort(nums.begin(), nums.end());
                int n = nums.size();
                int right = n-1;
                int left = 0;
        
                while(left<right){
                    int sum = nums[left] + nums[right];
                    if(sum == target){
                        return "Yes";
                    }
                    else if(sum < target) left++;
                    else right--;
                }
                return "No";
            }
        };