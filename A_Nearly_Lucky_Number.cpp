#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    int c1=0;
    for(int i=0; i<s.size(); i++){
       if(s[i]=='4' || s[i]=='7'){
           c1++;
       }
    }
    if(c1==4 || c1==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
return 0;
}    
    