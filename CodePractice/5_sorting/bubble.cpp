// write selection sorting algo
#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<iterator>
using namespace std;
int main(){

    int n=12,temp, min, swapFlag=0;
    vector<int> arr={9,5,1,7,4,8,22,87,45,3,2,1};

    cout<<"Printing UnSorted Array: \n";
    for(auto ele:arr){
        cout<<ele<<"  ";
    }
    cout<<"\n";

    for(int i=n-1; i>=1; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swapFlag=1;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(swapFlag ==0)
        break;
    }

    cout<<"Printing Sorted Array: \n";
    for(auto ele:arr){
        cout<<ele<<"  ";
    }

    return 0;
}
