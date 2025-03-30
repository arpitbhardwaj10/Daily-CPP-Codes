#include <iostream>
using namespace std;

int main(){
    int A;
  cout<< "Enter a number A:" << endl;  
  cin >> A;

    if (A % 2 == 0) {
    cout << "Its an Even Number." << endl;
  } else {
    cout << "Its an Odd Number."<< endl;
  }
  return 0;
}