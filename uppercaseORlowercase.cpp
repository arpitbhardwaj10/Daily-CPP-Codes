#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter Char :";
    cin >> ch ;
    
    if (ch >= 'A' && ch <= 'Z') {
        cout << "It is an Upper Case Character\n" ;
    
    }else if (ch >= 'a' && ch <= 'z') {
        cout << " It is a Lower Case Character\n" ;
    }
    else {
        cout << "Wrong input";
    } return 0;
}
