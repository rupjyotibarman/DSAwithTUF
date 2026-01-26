#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> num={13,23,44,89,67,43,55};
    vector<int>num2{12,45};
    vector<int>::iterator i=num2.begin();
    num2.insert(i,30);
    cout<<"inserting 30 in num2 : "<<endl;
    for(auto n: num2)
    {
     cout<<n<<"\t";
    }
    vector<int>::iterator j=num2.begin();
     num2.insert(j,num.begin(), num.end());
    cout<<"inserting num in num2 : "<<endl;
    for(auto n: num2)
     cout<<n<<"\t";

    return 0;
}