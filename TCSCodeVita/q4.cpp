#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> v={1,2,42,1,6,53,1,7,42,1,90,88};
    cout<<"Original Vector : \n";
    for(auto x : v){
        cout<< x <<"\t";
    }
    cout<<endl;

    //approach 1 : O(n)
    // reverse(v.begin(), v.end());
    // for(auto x: v){
    //     cout<<x <<"\t";
    // }

    //approach 2 : O(n)
    int left = 0;
    int right = v.size()-1;

    while(left<right)
    {
        swap(v[left],v[right]);
        left++;
        right--;
    }

    cout<<"array after reverse: \n";
    for(auto x: v){
        cout<<x <<"\t";
    }
    return 0;
}