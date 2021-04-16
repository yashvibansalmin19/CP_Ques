#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        vector<ll>v1;
        vector<ll>v2;
        for(ll i=0; i<n; i++){
            if(a[i]%2==0){
                v2.push_back(a[i]);
            }
            else{
                v1.push_back(a[i]);
            }
        }
        for(auto x: v1){
            cout<<x<<" ";
        }
        for(auto y: v2){
            cout<<y<<" ";
        }
        cout<<"\n";
    }    
return 0;
}
