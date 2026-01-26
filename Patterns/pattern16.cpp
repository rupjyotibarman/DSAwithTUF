#include<iostream>
using namespace std;
int main(){
    int n=5;
    char Start='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<Start;
        }
        Start++;
        cout<<"\n";
    }
    return 0;
}

/*
A
BB
CCC
DDDD
EEEEE
*/