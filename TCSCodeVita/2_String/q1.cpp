// Reverse a string
#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "RUPJYOTI";
    reverse(s.begin(), s.end());

    cout<<"Reverse string : "<< s;

    return 0;
}