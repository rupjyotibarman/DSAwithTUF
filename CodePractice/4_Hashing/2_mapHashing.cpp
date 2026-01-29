//counting no of element in a given array using map hashing
#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<iterator>
using namespace std;
int main(){

    // For integers ------------------
    // vector<int> arr={1,2,4,2,1,4,5,2,8};
    // map<int, int> hm;

    // for(int i=0; i<arr.size(); i++){
    // hm[arr[i]]++;

    // }

    // for(auto mp : hm){
    //     cout<<mp.first<<" : "<<mp.second<<"\n";
    // }

    // For characters ---------------------
    vector<int> arr={'a','b','d','e','g','a','f','k','l','m','m','n','a','d'};
    map<int, int> hm;

    //logic 1
    // for(int i=0; i<arr.size(); i++){
    // hm[arr[i]]++;
    // }

    // for(auto mp : hm){
    //     cout<<char(mp.first)<<" : "<<mp.second<<"\n";
    // }
    //output:
    // a : 3
    // b : 1
    // d : 2
    // e : 1 ...so on

    //logic 2
    for(int i=0; i<arr.size(); i++){
    hm[arr[i]-'a']++;
    }

    for(auto mp : hm){        // this is a iterator which can iterate the pair, that is why we are using mp.first mp.second
        cout<<mp.first<<" : "<<mp.second<<"\n";
    }
    //output:
    // 0 : 3
    // 1 : 1
    // 3 : 2
    // 4 : 1 .. so on
    return 0;
}