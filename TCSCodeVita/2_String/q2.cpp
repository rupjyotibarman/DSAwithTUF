// Reverse a string
#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "MOROM";
    string temp = s;
    reverse(s.begin(), s.end());

    if(temp == s){
        cout<<"the String : "<< s<< " is Palindrome.";
    }
    else{
         cout<<"the String : "<< s<< " is not Palindrome.";
    }


    return 0;
}