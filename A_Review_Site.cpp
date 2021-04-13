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
        ll countU=0;
        for(ll i=0; i<n; i++){
            if(a[i]==1 || a[i]==3){
                countU++;
            }
        }
        cout<<countU<<"\n";
    }    
return 0;
}
