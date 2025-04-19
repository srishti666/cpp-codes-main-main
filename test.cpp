#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int temp  = a;
    a = b;
    b = temp; 
    std:: cout << "a = " << a <<endl 
                <<"b = "<<b;
    // std:: cout << a << endl;
    return 0;
}