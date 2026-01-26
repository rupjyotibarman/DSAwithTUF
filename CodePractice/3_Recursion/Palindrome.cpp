#include<iostream>
using namespace std;
bool CheckPalindrome(int,string);
int main()
{
    string s="MARAM";
    bool isPalindrome= CheckPalindrome(0,s);
    cout<<"is palindrom : "<< isPalindrome;
    return 0;
}

bool CheckPalindrome(int ind,string s){
    
    if(ind> s.size()/2){
        return true;
    }

    if(s[ind]!= s[s.size()-ind-1]){
        return false;
    }
    return CheckPalindrome(ind+1,s);
}
