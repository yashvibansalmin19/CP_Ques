#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    
    cin>>t;
    ll p,q;
    while(t--){
        cin>>p>>q;
        int x = __gcd(p,q);
        if(x==1) {
           cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}