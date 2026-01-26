#include<iostream>
using namespace std;
int main()
{
    int n=5;
    char A =65;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<A<<" ";
            A++;
        }
        cout<<"\n";
    }

        for(int i=0;i<n;i++){
            A=65; /* A='A';  this is also valid  */   
            for(int j=0;j<i+1;j++){
                cout<<A<<" ";
                A++;
            }
        cout<<"\n";
    }
}

/*
A 
B C 
D E F 
G H I J 
K L M N O 
A 
A B 
A B C 
A B C D 
A B C D E 
*/