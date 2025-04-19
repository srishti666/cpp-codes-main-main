#include <iostream>
using namespace std;

int main(){
    
//  for(int i=0; i<4; i++){
//     for(int j=0; j<4; j++){
//         if(i>j)
//             cout<<" ";
//         else cout<<"*";
//     }
//     cout<<endl;
//     return 0;
//     }

//--------bottom left triangle
    // for(int i=1; i<=5; i++){
    //     for(int j = 1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    //--------left botton triangle

    // for(int i=0; i<5; i++){
    //     for(int j=0; j<5; j++){
    //         if(i>j)
    //             cout<<"* ";
    //         else 
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //--------left botton triangle

    // for(int i=0; i<5; i++){
    //     for(int j=0; j<6-i; j++){
    //         // if(i<=j)
    //             cout<<"* ";
    //         // else 
    //         //     cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;


    //-------bottom left triangle
    // for(int i=1; i<=5; i++){
    //     for(int j = 1; j<=5; j++){
    //         if(i<=j)
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //---top left triangle
    // for(int i=0; i<4; i++){
    //     for(int j = 0; j<4; j++){
    //         if(i>j)
    //         cout<<" ";
    //         else cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //------bottom right triangle
    for(int i=0; i<4; i++){
        for(int j = 0; j<4; j++){
            if(i+j>=3)
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
 }