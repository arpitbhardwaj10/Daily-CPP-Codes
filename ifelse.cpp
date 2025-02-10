//write a program that takes an input of age 
//and prints if you are adult or not
// if >= 18, you are an adult
// if <= 18, you are not an adult
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
      cout<<"you are an Adult";
    }
    else{
      cout<<"you are not an Adult yet!!";
    }
}