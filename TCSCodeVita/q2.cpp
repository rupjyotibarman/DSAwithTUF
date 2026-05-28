//Find the Largest element in an array
#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr1 ={ 2,3,5,21,5,64,2,2,5,67,5,4,3,2};
    //Approach 1
    // sort(arr1.begin(), arr1.end());
    // cout<<"Largest number is : "<< arr1.back();

    //Approach 2
    // int max = arr1.front();
    // for(auto x : arr1){
    //     if(x>max){
    //         max = x;
    //     }
    // }
    // cout<<"Largest number is :"<<max;

    //Approach 3 - using min_element
    auto it = max_element(arr1.begin(), arr1.end());
    cout<<"Largest element is : "<<*it<<endl;
    auto index = distance(arr1.begin(), it);
    cout<<"Largest element is : "<<index;
    return 0;
}