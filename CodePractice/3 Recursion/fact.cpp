#include<iostream>
using namespace std;
int fact(int);
int main(){

    int num;
    cout<<"enter a number: "<<endl;
    cin>>num;
    cout<<"factorial is : "<<fact(num);
    return 0;
}

int fact(int num){
    int resutl;
    if(num==1)
     return 1;
    resutl= num * fact(num-1);
    return resutl;
}