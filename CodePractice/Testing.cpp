#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<string> words{"label","roller","bella" };
    sort(words.begin(), words.end());
    for(auto word:words){
        cout<<word<<endl;
    }
    return 0;
}