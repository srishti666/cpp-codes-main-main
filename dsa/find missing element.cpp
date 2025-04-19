// question: https://leetcode.com/problems/missing-number/

TC: O(n^2)
class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int n = nums.size();
            for(int i=0; i<=n; i++){
                int flag = 0;
    
            for(int j = 0; j<n; j++){
                if(nums[j] == i) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) return i;
            }
            return -1;
        }
    };

    // solution 2: TC: O(N) + O(N) ~ O(2*N)

    #include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n + 1, 0);

        for(int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }

        for(int i = 0; i <= n; i++) {
            if(hash[i] == 0) return i;
        }
        return -1;
    }
};

// solution 3 TC: O(n) using XOR
// XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
// XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2

class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int N = nums.size();
            int xor1 = 0, xor2 = 0;
    
            for (int i = 0; i < N; i++) {
                xor2 = xor2 ^ nums[i]; // XOR of array elements
                xor1 = xor1 ^ i; // XOR up to [0...N-1]
            }
    
            xor1 = xor1 ^ N; // XOR up to [0...N]
    
            return (xor1 ^ xor2); // missing number
        }
    };
    
    