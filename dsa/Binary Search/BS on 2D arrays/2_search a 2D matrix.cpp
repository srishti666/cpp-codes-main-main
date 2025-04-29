//question: https://leetcode.com/problems/search-a-2d-matrix/description/

//brute force TC: O(n*m)

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int n = matrix.size();
            int m = matrix[0].size();
    
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(matrix[i][j] == target)
                    return true;
                }
            }
            return false;
        }
    };

    //optimized TC: O(log(m*n))

    class Solution {
        public:
            bool searchMatrix(vector<vector<int>>& matrix, int target) {
            if (matrix.empty() || matrix[0].empty()) return false;
        
                int m = matrix.size();
                int n = matrix[0].size();
        
                int low = 0;
                int high = m * n - 1;
        
                while (low <= high) {
                    int mid = (low + high) / 2;
                    int midValue = matrix[mid / n][mid % n];
        
                    if (midValue == target) {
                        return true;
                    } else if (midValue < target) {
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }
        
                return false;
            }
        };
           