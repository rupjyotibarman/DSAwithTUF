#include<iostream>
#include<list>
#include<string>
using namespace std;
int main(){

    list<int>l1={10,20,30,40,23,11,45};
    for(auto x:l1)
     cout<<x<<"\t";
    cout<<endl;
    for(auto itr=l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<"\t";
    }
return 0;
}