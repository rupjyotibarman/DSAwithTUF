//counting no of element in a given array using user define hashing array or hardcode hasing array
#include<iostream>
#include<vector>
using namespace std;
int main(){

    // For int ----------------------
    // vector<int> arr={1,2,4,2,1,4,5,2,8};
    // vector<int> hash(10,0);

    // for(int i=0; i<arr.size(); i++){
    //     hash[arr[i]]+=1;
    // }

    // for(int i=0; i< hash.size(); i++){
    //     cout<<"hash["<<i<<"] : "<<hash[i]<<"\n";
    // }

    // For Char -----------------------
    vector<char> arr = {'a','b','d','e','g','a','f','k','l','m','m','n','a','d'};
    vector<int> hash(26,0);

    for(int i=0; i<arr.size(); i++){
        hash[arr[i]-'a']+=1;
    }

    for(int i=0; i< hash.size(); i++){
        cout<<"hash["<<i<<"] : "<<hash[i]<<"\n";
    }
    return 0;
}