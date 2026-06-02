// # Problem Statement: Given an unsorted array, find the median of the given array.

// # Examples:

// # Example 1:
// # Input: [2,4,1,3,5]
// # Output: 3

// # Example 2:
// # Input: [2,5,1,7]
// # Output: 3.5
// # What is a Median?
// # Median is defined as the value which is present in the middle for a series of values. Note, in order to find the median of an array of integers, we must make sure they are sorted.

// #count sort o(n) applied to sort the unsorted array
#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6};
    cout<<"Original array : "<<endl;
    for(auto x: v){
        cout<<x <<"\t";
    }

    float mean;
    float mid;
    sort(v.begin(), v.end());
    if(v.size()%2==0){
        mid = v.size()/2;
        mean = (v[mid-1]+v[mid])/2.0;
    }else{
        mid = (v.size()-1)/2.0;
        mean = v[mid];
    }

    cout<<endl<<"Mean value is : "<< mean;

    return 0;
}