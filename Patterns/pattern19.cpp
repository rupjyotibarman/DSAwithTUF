#include<iostream>
using namespace std;
int main(){
    int n=5;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++){
            cout<<"*";
        }

        for(int k=0;k<(i+i);k++){
            cout<<" ";
        }
        
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }

        for(int k=0;k<(n-(i+1))*2;k++){
            cout<<" ";
        }
        
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/