#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter Three numbers\n" ;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "The Largest Number is " << a << endl; 
    }if (b >= a && b >= c) {
        cout << "The Largest Number is " << b << endl;
    }else{
        cout << "The Largest Number is " << c << endl;
    }
    return 0;
    
}