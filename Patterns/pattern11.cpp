#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int start;
    for(int i=0;i<=n;i++){
        if(i%2==0){start=1;}else start=0;
        for(int j=0;j<i+1;j++){
            cout<<start;
            if(start==0) start=1; else if(start==1) start=0;
            /*start=1-start;*/
        }
        cout<<"\n";
    }
}

/*
1
01
101
0101
10101
010101
*/