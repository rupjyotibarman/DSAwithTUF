#include<iostream>
using namespace std;
int main (){
    int n=5;
    int count=1;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<i+1;j++){
            cout<<j;
        }

        for(int s=2; s<2*(n-i); s++){
            cout<<" ";
        }

        for(int j=i;j>=1;j--){
        cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}

/*
1      1
12    21
123  321
12344321
*/