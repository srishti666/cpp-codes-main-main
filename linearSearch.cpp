#include <iostream>
using namespace std;

int main(){
    int A[10], n =10, i, key; 

    cout<<"Enter numbers: "<<endl;
    for(i = 0; i<n; i++){
        cin>>A[i];
    }

    cout<<"Enter Key: ";
    cin >> key;

    for(i=0; i<n; i++){
        if(key == A[i]){
            cout<<"Found at "<<i<<endl;
            return 0;
        }
    }
    cout<<"Not found";
    return 0;
}