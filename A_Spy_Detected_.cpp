#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    ll n,k=0;
    
    while(t--){
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=1; i<n-1; i++){
           if(a[i-1]!=a[i] && a[i]!=a[i+1]){
               k=i+1;
               break;
           }
           else{
               k=0;
           }
        }
        if(k==0 && a[0]!=a[1]){
            k=1;
        }
        if(k==0 && a[n-1]!=a[n-2]){
            k=n;
        }
        cout<<k<<"\n";
    }
    return 0;
}    