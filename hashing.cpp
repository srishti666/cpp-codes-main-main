#include <iostream>
using namespace std;
int main() {
    int n = 9 ; 
    int a[9] = {1,3,3,4,1,4,4,4,4};
    int b[9]={0};
    int i = 0 ; 
    while(i<n)
    {
        int x = a[i] ; 
        b[x] = b[x] + 1 ; 
        i++;
    }
    //Above for loop took O(n) time.
    //All frequencies have been calculated in advance by now.. :-) :-) 
    
    int queries[3] = {3,4,1};
    int q = 3 ; 
    int j = 0 ; 
    while(j<q)
    {
        int x = queries[j] ; 
        cout<<b[x]; //takes O(1) time..
        cout<<' ';
        j++;
    }
    //Above for loop took O(q) time.
    
    //Hence total time : O(n+q).
}