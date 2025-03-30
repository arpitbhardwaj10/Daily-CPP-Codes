#include <iostream>
using namespace std;

int main(){
    char op;
    float num1 , num2 ;

   cout << "Enter num1" << endl ;
   cin >> num1;
   cout << "Enter num2" << endl ;
   cin >> num2;
   cout << "Enter Operator +,-,*,/:" << endl ;
   cin >> op ;

   switch (op){

    case '+':
    cout << num1 << "+" << num2 << "=" << num1 + num2;
    break;

    case '-':
    cout << num1 << "-" << num2 << "=" << num1 - num2;
    break;

    case '*':
    cout << num1 << "*" << num2 << "=" << num1 * num2;
    break;

    case '/':
    cout << num1 << "/" << num2 << "=" << num1 / num2;
    break;

    default:
    // If the operator is other than +,-,*,/ then error message is shown
    cout << "Error! operator is not correct";
    break;
      
    return 0;


   }

   
}