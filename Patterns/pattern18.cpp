#include<iostream>
using namespace std;
int main(){
    int n=5;
    char start='A'+(n-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<start;
            start++;
        }
        start='A'+(n-1);
        start=start-(i+1);
        cout<<"\n";
        
    }
    return 0;
}

/*
E
DE
CDE
BCDE
ABCDE
*/