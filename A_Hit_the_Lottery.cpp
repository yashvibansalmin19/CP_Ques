#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    ll ans=0;
    if(n>=100){
        ll m= n/100;
        ans+=m;
        n-=m*100;
    }
    if(n>=20){
        ll m= n/20;
        ans+=m;
        n-=m*20;
    }
    if(n>=10){
        ll m= n/10;
        ans+=m;
        n-=m*10;
    }
    if(n>=5){
        ll m= n/5;
        ans+=m;
        n-=m*5;
    }
    if(n>=1){
        ll m= n/1;
        ans+=m;
        n-=m*1;
    }
    cout<<ans;
return 0;
}