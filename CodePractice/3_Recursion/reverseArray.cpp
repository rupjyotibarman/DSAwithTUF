#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void ReverseArray(vector<int>::iterator, vector<int>::iterator);
int main(){

    vector<int> arr{2,4,7,9,20};
    cout<<"array before reverse: ";
    for(auto ele:arr){
        cout<<ele<<"\t";
    }
    cout<<endl;

//Aproach  #1 two pointer/iterator-------------------------
    // auto lp=arr.begin();
    // auto rp=--arr.end();
    // while(lp<=rp){
    //     int temp=*lp;
    //     *lp=*rp;
    //     *rp=temp;
    //     lp++; rp--;
    // }

//Approach #2 algorithm reverse-----------------------------
    //reverse(arr.begin(),arr.end());

//Approach #3 using index---------------------------------
    // int li=0,ri=arr.size()-1;
    // while(li<ri){
    //     swap(arr[li],arr[ri]);
    //     li++;ri--;
    // }

//Approach #4 using recursion --------------------------------------

    ReverseArray(arr.begin(),--arr.end());

    cout<<"array after reverse: ";
    for(auto ele:arr){
        cout<<ele<<"\t";
    }
    return 0;
}

void ReverseArray(vector<int>::iterator li, vector<int>::iterator ri){
    if(li>=ri){
        return;
    }
    int temp=*li;
    *li=*ri;
    *ri=temp;
    ReverseArray(++li,--ri);
}