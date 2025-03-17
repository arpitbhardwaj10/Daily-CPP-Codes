//c++ program to Swap two numbers.
//swapping using 3rd variable.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 2 , b = 3;
    cout << "before swapping a = " << a << ",  b = " << b << endl;
    
    //temporary variable
    int temp;

    //apply  swapping algorithm
    temp = a;
    a = b;
    b = temp;
    cout << "after swapping a = " << a << ", b = " << b << endl;

    return 0;
}