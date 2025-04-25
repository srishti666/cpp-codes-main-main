//question: https://leetcode.com/problems/row-with-maximum-ones/description/


int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int cnt_max = 0;
    int index = -1;

    //traverse the matrix:
    for (int i = 0; i < n; i++) {
        int cnt_ones = 0;
        for (int j = 0; j < m; j++) {
            cnt_ones += matrix[i][j];
        }
        if (cnt_ones > cnt_max) {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

