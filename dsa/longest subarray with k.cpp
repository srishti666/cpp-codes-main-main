// question: https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1


//TC: O(n logn) : ordered map SC: O(n)
//O(n *1) unordered map with no collisions, O(n*n) unordered map with collisions
int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    map<long long, int> map;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if(sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        //if my map has the remaining , which means it will not be pointing to the end
        //Calculate the length and update maxLen:
        if(map.find(rem) != map.end()) {
            int len = i - map[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (map.find(sum) == map.end()) {
            map[sum] = i;
        }
    }

    return maxLen;

