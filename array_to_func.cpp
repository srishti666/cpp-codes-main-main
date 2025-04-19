#include<iostream>
using namespace std;

const int ARRAY_SIZE = 5;

void display(int m[]){
    cout<<"Displaying marks: "<<endl;

    for(int i =0;i<ARRAY_SIZE;i++){
        cout<<"Student "<<i+1<<": "<<m[i]<<endl;
    }
}

int main(){
    int marks[ARRAY_SIZE] = {88, 76, 90, 61, 59};
    display(marks);

    return 0;
}