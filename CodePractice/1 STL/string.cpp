#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    auto a=4;
    cout<<a<<endl;
    string str1="RUPJYOTI";
    for(string::reverse_iterator it=str1.rbegin(); it!= str1.rend();it++){
        cout<<*it;
    }
    cout<<endl;
    cout<<str1.size()<<endl;
    cout<<str1.length()<<endl;
    cout<<str1.max_size()<<endl;
    cout<<str1.capacity()<<endl;
    str1.clear();
    cout<<str1<<endl;
    str1.append("rup");
    cout<<str1<<endl;
    cout<<str1.back()<<endl;
    cout<<str1.front()<<endl;
    return 0;
}