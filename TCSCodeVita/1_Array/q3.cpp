//Find Second Smallest and Second Largest Element in an array
#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> arr1 ={ 1,1,1,1,1,1,2,3,5,21,5,64,90,90,2,2,5,67,5,78,4,3,2,90};
    //Approach 1  O(nlogn)
    // sort(arr1.begin(), arr1.end());
    // int secSmallest=arr1[1];
    // int lastIn= arr1.size()-1;
    // int secLargest = arr1[lastIn-1];

    // for(int i =0 ;i<arr1.size(); i++){
    //     if(arr1[i]== secSmallest){
    //         secSmallest = arr1[i+2];
    //         continue;
    //     }
    //     else{
    //         break;
    //     }
    // }

    // for(int i =arr1.size()-1 ;i>0; i--){
    // if(arr1[i]== secLargest){
    //     secLargest = arr1[i-2];
    //     continue;
    // }
    // else{
    //     break;
    //     }
    // }

    // cout<<"The 2nd Smallest numbers is : "<<secSmallest<<endl<<"The 2nd Largest is : "<<secLargest;
    
    //Approach 2  O(n)
    // int small = INT_MAX, secSmall = INT_MAX;
    // int large = INT_MIN, secLarge = INT_MIN;

    // for(int i =0 ;i< arr1.size();i++){
    //     if(arr1[i]<small){
    //         secSmall = small;
    //         small=arr1[i];
    //     }else if(arr1[i]< secSmall && arr1[i]>small){
    //         secSmall = arr1[i];
    //     }

    //     if(arr1[i]>large){
    //         secLarge = large;
    //         large=arr1[i];
    //     }else if(arr1[i]>secLarge && arr1[i]<large){
    //         secLarge = arr1[i];
    //     }
    // }
    

    // cout<<"Small: "<<small<<"\t"<<"2nd Small :"<<secSmall<<endl;
    // cout<<"Large: "<<large<<"\t"<<"2nd Large : "<<secLarge;

    //Approach 3 O(nlogn)

    int small = INT_MAX, secSmall = INT_MAX;
    int large = INT_MIN, secLarge = INT_MIN;

    sort(arr1.begin(), arr1.end());
    // std::unique moves duplicates to the end and returns a new end iterator
    
    cout<<"Printing array after sor: ";
    for(auto x : arr1){
        cout<<x <<"\t";
    }
    cout<<endl;

    auto last = unique(arr1.begin(), arr1.end());
    cout<<"Printing array after unique (remove duplicates): ";
    for(auto x : arr1){
        cout<<x <<"\t";
    }
    cout<<endl;

    // Actually remove the duplicates
    arr1.erase(last, arr1.end());
    cout<<"Printing array after remove duplicates: ";
    for(auto x : arr1){
        cout<<x <<"\t";
    }
    cout<<endl;
    if(arr1.size()>2){
    cout<<"Small: "<<arr1[0]<<"\t"<<"2nd Small :"<<arr1[1]<<endl;
    cout<<"Large: "<<arr1[arr1.size()-1]<<"\t"<<"2nd Large : "<<arr1[arr1.size()-2];
    }

    return 0;
}