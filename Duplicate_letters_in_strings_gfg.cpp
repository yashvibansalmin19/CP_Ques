#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    getline(cin, s);
    map<char, int>m;
    for(int i=0; i<s.length(); i++){
        if(m.find(s[i])==m.end()){
            m[s[i]]=1;
        }
        else{
            m[s[i]]++;
        }
    }
    for(auto x:m){
        if(x.second>1){
            cout<< x.first <<","<<" "<<"count"<<" "<<x.second <<"\n";
        }
    }
}