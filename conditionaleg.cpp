#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;


    if (age >= 18){
    cout << "You are Eligible to Vote" << endl;
    } 
    else{
    cout << "your are not eligible to vote" << endl;
    }
    return 0;
}