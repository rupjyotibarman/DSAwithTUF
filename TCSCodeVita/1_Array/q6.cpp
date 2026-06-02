// # Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

// # Examples:

// # Example 1:
// # Input: 8 7 1 6 5 9
// # Output: 1 5 6 9 8 7
// # Explanation: First three elements are in the ascending order and next three elements are in the descending order.

// # Example 2:
// # Input: 4 2 8 6 15 5 9 20
// # Output: 2 4 5 6 20 15 9 8
// # Solution:

// # Intuition: Sort the whole array. Then print the first half of the array to get the first half in the ascending order and then print the rest of the array in the reverse order.

// # Approach:

// # Sort the given array.
// # Print the first half of the array i.e from 0 to (n/2 -1)th index,to print the first half in the ascending order.
// # Then print elements from n-1 to n/2th index to get the second half in the descending order.

// #count sort used to sort an array
#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> v={4,2,8,1,6,9,3,5};
    sort(v.begin(), v.end());
    int mid = (v.size()/2);
    int left = mid;
    int right = v.size()-1;
    while(left<right){
        swap(v[left],v[right]);
        left++;
        right--;
    }

    cout<<"printing rearrange array: "<<endl;
    for(auto x : v){
        cout<<x <<"\t"<<endl;
    }
    return 0;
}
