// # Problem Statement: Given an array of n size, rotate the array by k elements

// # Examples:

// # Example 1:
// # Input: N = 5, array[] = {1,2,3,4,5} K=2
// # Output: {3,4,5,1,2}
// # Explanation: Rotate the array to right by 2 elements.

// # Example 2:
// # Input: N = 7, array[] = {1,2,3,4,5,6,7} K=3
// # Output: {4,5,6,7,1,2,3}
// # Explanation: Rotate the array to right by 3 elements.

#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> v={3,4,2,6,8,9};
    int k=2;

    cout<<"Original array : "<<endl;
        for(auto x: v){
        cout<<x <<"\t";
    }
    cout<<endl;

    cout<<"Rotate array : "<<endl;
    //rotate(v.begin(), v.begin()+k, v.end());
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k, v.end());
    reverse(v.begin(), v.end());
    for(auto x: v){
        cout<<x <<"\t";
    }
}