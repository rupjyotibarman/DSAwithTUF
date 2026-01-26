#include<iostream>
using namespace std;
void Print1toN(int);
void PrintNto1(int);
int main(){

    int num;
    cout<<"enter a number: "<<endl;
    cin>>num;
    //PrintNto1(num);
    Print1toN(num);
    return 0;
}

void PrintNto1(int num){
    if(num==1)
     {
        cout<<num<<endl;
        return;
     }
    cout<<num<<endl;
    PrintNto1(num-1);
}

void Print1toN(int num){
    if(num==1)
     {
        cout<<num<<endl;
        return;
     }

    Print1toN(num-1);
    cout<<num<<endl;
}