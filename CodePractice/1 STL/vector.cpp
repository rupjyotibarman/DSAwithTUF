#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> num{13,23,44,89,67,43,55}; //vector<int> num={13,23,44,89,67,43,55};
    cout<<num.size()<<endl;
    cout<<num.capacity()<<endl;
    num.push_back(10);
    cout<<num.size()<<endl;
    cout<<num.capacity()<<endl;

    return 0;
}