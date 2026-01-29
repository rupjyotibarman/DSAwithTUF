// write selection sorting algo
#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<iterator>
using namespace std;
int main(){

    int n=12,temp, min;
    vector<int> arr={9,5,1,7,4,8,22,87,45,3,2,1};

    cout<<"Printing UnSorted Array: \n";
    for(auto ele:arr){
        cout<<ele<<"  ";
    }
    cout<<"\n";

    for(int i=0; i<= n-2; i++){
        min=i;
        for(int j=i+1; j<=n-1; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }

        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    cout<<"Printing Sorted Array: \n";
    for(auto ele:arr){
        cout<<ele<<"  ";
    }

    return 0;
}
