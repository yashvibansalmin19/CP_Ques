#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    ll n = s.size();
    ll mid=0;
    while(s[mid]!='^'){
        mid++;
    }
    ll sum=0,val;
    for(ll j=0; j<n; j++){
       if(s[j]!='='){
           val=s[j]-'0';
           sum=sum+val*(j-mid);
       }
    }
    if(sum==0){
        cout<<"balance";
    }
    else if(sum<0){
        cout<<"left";
    }
    else{
        cout<<"right";
    }
    return 0;
}