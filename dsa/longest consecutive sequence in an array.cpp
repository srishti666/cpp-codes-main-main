//question: https://www.naukri.com/code360/problems/longest-successive-elements_6811740?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse

//TC: O(n^2)  SC: O(n)
bool linearSearch(vector<int>&a, int num) {
    int n = a.size(); 
    for (int i = 0; i < n; i++) {
        if (a[i] == num)
            return true;
    }
    return false;
}
int longestSuccessiveElements(vector<int>&a) {
    int n = a.size(); 
    int longest = 1;
    for (int i = 0; i < n; i++) {
        int x = a[i];
        int cnt = 1;
        
        while (linearSearch(a, x + 1) == true) {
            x += 1;
            cnt += 1;
        }

        longest = max(longest, cnt);
    }
    return longest;
}

//better


int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    if (n == 0) return 0;

    //sort the array:
    sort(a.begin(), a.end());
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;

    //find longest sequence:
    for (int i = 0; i < n; i++) {
        if (a[i] - 1 == lastSmaller) {
            //a[i] is the next element of the
            //current sequence.
            cnt += 1;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller) {
            cnt = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}


//optimal
//TC: O(3n) SC:O(n)
// refer to : https://takeuforward.org/data-structure/longest-consecutive-sequence-in-an-array/  (21: 06mins)
//set takes O(n) in the worst cases, usually unordered set takes O(1); set takes O(1) but for n elements it takes O(n)
//for loop -> O(n) + while loop -> O(2n) total O(3n)

int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    if(n == 0) return 0;
    int longest = 1;

    unordered_set<int> st;
    for(int i=0; i<n; i++){
        st.insert(a[i]);
    }

    for(auto it: st){
        if(st.find(x-1) == st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                count++;
                x++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}