// write selection sorting algo
#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<iterator>
using namespace std;
int main(){

    int n=12,temp, min;
    vector<int> arr={9,5,7,1,4,8,22,87,45,3,2,1};

    cout<<"Printing UnSorted Array: \n";
    for(auto ele:arr){
        cout<<ele<<"  ";
    }
    cout<<"\n";

    for(int i=1; i<=n-1; i++){
        for(int j=i; j>0; j--){
            if(arr[i]<arr[j-1]){
                temp=arr[i];
                arr[i]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }

    cout<<"Printing Sorted Array: \n";
    for(auto ele:arr){
        cout<<ele<<"  ";
    }

    return 0;
}
