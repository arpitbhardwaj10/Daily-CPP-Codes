#include <iostream>
using namespace std;

int main(){
    int a =10;

    int b = a++; //update
    cout << "b=" << b << endl; //this will give output 10.
    cout << "a=" << a << endl; //this will give output 11.
    return 0;
}