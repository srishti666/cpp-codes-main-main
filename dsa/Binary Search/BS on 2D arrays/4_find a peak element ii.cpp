//question: https://leetcode.com/problems/find-a-peak-element-ii/description/


//optimized TC: O(nlog(m))
class Solution {
    public:
        int findMaxIndex(vector<vector<int>>& mat, int n, int col) {
            int maxValue = -1;
            int index = -1;
            for(int i = 0; i < n; i++) {
                if(mat[i][col] > maxValue) {
                    maxValue = mat[i][col];
                    index = i;
                }
            }
            return index;
        }
    
        vector<int> findPeakGrid(vector<vector<int>>& mat) {
            int n = mat.size(); //rows
            int m = mat[0].size(); //cols
    
            int low = 0;
            int high = m - 1;
    
            while(low <= high) {
                int mid = (low + high) / 2;
                int maxRowIndex = findMaxIndex(mat, n, mid);
    
                int left = mid - 1 >= 0 ? mat[maxRowIndex][mid - 1] : -1;
                int right = mid + 1 < m ? mat[maxRowIndex][mid + 1] : -1;
    
                if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right) {
                    return {maxRowIndex, mid};
                } else if(mat[maxRowIndex][mid] < left) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
    
            return {-1, -1};
        }
    };

