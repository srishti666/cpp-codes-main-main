#include <iostream>

using namespace std;

int main() {
    // double sales = 95000;
    // cout<<"Sales: $"<< sales<<endl;

    // const double stateTaxRate = 0.4;
    // double stateTax = sales * stateTaxRate;
    // cout<<"stateTax: $"<< stateTax <<endl;

    // const double countyTaxRate = 0.2;
    // double countyTax = sales * countyTaxRate;
    // cout<<"countyTax: $"<< countyTax <<endl;

    // double totalTax = stateTax + countyTax;
    // cout<<"TotalTax = $" << totalTax;

    //  int a;
    // cout<<"Enter a number : ";
    // cin>>a;

    // (a==10)?cout<<"Hello" : cout<<"Bye";
    // return 0; 


    //------sum of all elements

    // int A[7] = {2, 3, 5, 6, 9, 10, 1};
    // int n = 7, sum = 0;

    // // for(int i = 0; i<n; i++){
    // //     sum += A[i];
    // // }

    // for(int x : A){
    //     sum+=x;
    // }
    // cout<<sum;
    // return 0;

    //-------finding max element
    int A[7] = {2, 3, 50, 6, 9, 10, 1};
    int max=0;

    for(int x: A){
        if(x>max)
        max = x;
    }
    cout<<max;

}