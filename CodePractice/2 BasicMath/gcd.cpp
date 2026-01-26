#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1;
    int num1,num2;
    cout<<"Enter two number to find all the divisions : "<<endl;
    cin>>num1>>num2;
    int gcd=1;
    for(int i=1;i<=min(num1,num2);i++){
        if(num1%i==0 && num2%i==0){
            if(i>gcd)
                gcd=i;
        }
    }

    cout<<"the GCD of both "<<num1<<" and "<<num2<<" is : "<<gcd;
    cout<<min(num1,num2);
    return 0;
}