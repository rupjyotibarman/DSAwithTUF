// # problem statement: given an array, we have found the number of occurrences of each element in the array.

// # examples:

// # example 1:
// # input: arr[] = {10,5,10,15,10,5};
// # output: 10  3
// # 	 5  2
// #         15  1
// # explanation: 10 occurs 3 times in the array
// # 	      5 occurs 2 times in the array
// #               15 occurs 1 time in the array

// # example2: 
// # input: arr[] = {2,2,3,4,4,2};
// # output: 2  3
// # 	3  1
// #         4  2
// # explanation: 2 occurs 3 times in the array
// # 	     3 occurs 1 time in the array
// #              4 occurs 2 time in the array

#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> v={1,2,4,2,1,6,6,6,6,4,65,3,2,2,4,5,7,6};
    unordered_map<int,int>fre;
    for(auto x: v){
        fre[x]++;
    }

    cout<<"Printing frequency : "<<endl;
    for(const auto it : fre){
        cout<<"Number : "<<it.first<<"\t Value : "<<it.second<<endl;
    }
    return 0;
}