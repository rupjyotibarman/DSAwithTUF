#include<iostream>
using namespace std;
int main()
{
    int n=6;
    char A =65;
    for(int i=0;i<=n;i++){
        A=65;    
        for(int j=n;j>i+1;j--){
            cout<<A<<" ";
            A++;
        }
    cout<<"\n";
    }
}

/*
A B C D E 
A B C D 
A B C 
A B 
A 
*/