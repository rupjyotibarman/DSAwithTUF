//Print all the duplicate characters in a string
// Reverse a string
#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    //string s = "MOROMMRA";  //MMOOR
    //[Approach - 1] Using Sorting - O(n*log(n)) Time and O(1) Space
    //int count =1;
    // sort(s.begin(), s.end());
    // for(int i=0;i<s.length();){

    //     while(s[i]==s[i+1]){
    //         count++;
    //         i++;
    //     }
    //     cout<<"Char '"<<s[i]<<"' occur : "<<count<< " times."<<endl;
    //     count=1;
    //     i++;
    // }

    // Using Hashing - O(n) Time
    string s = "MOROMMRA";  //MMOOR
    //map<char, int> m;     // MAP is slower than UnorderedMap
    unordered_map<char, int> m;   // This is faster than MAP    
    //for(int i=0;i<s.length();i++)
    for(char c:s)
    {
        m[c]++;
    }

    for(auto it:m){
        cout<<"Char '"<<it.first<<"' occur : "<<it.second<< " times."<<endl;
    }
    return 0;
}