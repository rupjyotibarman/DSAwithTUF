#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<=n*2-1;i++){
        int start=i;
        if(i>n) start=(n*2-1)-i;
        for(int j=0;j<start;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

/*
*
**
***
****
*****
***
**
*
*/