#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<n/2; i++){
            for(ll j=1; j<=k; j++){
                for(int p=0; p<n; p++){
                    
                }
            }
        }
        for(ll i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }    
return 0;
}
