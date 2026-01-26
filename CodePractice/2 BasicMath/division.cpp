#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1;
    int num;
    cout<<"Enter a number to find all the divisions : "<<endl;
    cin>>num;

    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            v1.push_back(i);
            if(num/i !=i)
                v1.push_back(num/i);
        }
    }

    sort(v1.begin(), v1.end());
    for(auto divi: v1){
        cout<<divi<<endl;
    }

    return 0;
}