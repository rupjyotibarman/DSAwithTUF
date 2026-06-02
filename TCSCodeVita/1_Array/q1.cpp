// # Find the smallest element in an array
// #
// # Problem Statement: Given an array, we have to find the smallest element in the array.
// #
// # Examples:
// #
// # Example 1:
// # Input: arr[] = {2,5,1,3,0};
// # Output: 0
// # Explanation: 0 is the smallest element in the array.
// #
// # Example2:
// # Input: arr[] = {8,10,5,7,9};
// # Output: 5
// # Explanation: 5 is the smallest element in the array.
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr1 = {10,3,5,2,9,4,1,2,6,3,11};
    //Approach 1
    // sort(arr1.begin(), arr1.end());
    // cout<<"Smallest number is : "<< arr1.front();

    //Approach 2
    // int min = arr1.front();
    // for(auto x : arr1){
    //     if(x<min){
    //         min=x;
    //     }
    // }
    // cout<<"Smallest number is :"<<min;

    //Approach 3 - using min_element
    auto it = min_element(arr1.begin(), arr1.end());
    cout<<"Smalles element is : "<<*it<<endl;
    auto index = distance(arr1.begin(), it);
    cout<<"Smalles element is : "<<index;
    return 0;
}


