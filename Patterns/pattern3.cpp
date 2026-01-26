#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
}

/*
1
12
123
1234
*/