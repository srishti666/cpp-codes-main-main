//question: https://leetcode.com/problems/set-matrix-zeroes/


void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
    // set all non-zero elements as -1 in the row i:
    for (int j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}


void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
    // set all non-zero elements as -1 in the col j:
    for (int i = 0; i < n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

    // Set -1 for rows and cols
    // that contains 0. Don't mark any 0 as -1:

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }

    // Finally, mark all -1 as 0:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

//better solution
//TC: O(n*m) + O(n*m) = O(2*(n*m))
//SC: O(n+m)


class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int m = matrix.size();
            int n = matrix[0].size();
    
            vector<int> row(m, 0);
            vector<int> col(n, 0);
    
            // Mark the rows and columns that are to be set to zero
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (matrix[i][j] == 0) {
                        row[i] = 1;
                        col[j] = 1;
                    }
                }
            }
    
            // Set the matrix cells to zero
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (row[i] == 1 || col[j] == 1) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
    };