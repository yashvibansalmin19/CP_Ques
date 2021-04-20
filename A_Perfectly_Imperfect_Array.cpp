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
        int k=0;
        for(ll i=0; i<n; i++){
            if(ceil((double)sqrt(a[i])) != floor((double)sqrt(a[i]))){
                k=1;
                break;
            }
        }
        if(k==1){
            cout<<"YES \n";
        }
        else{
            cout<<"NO \n";
        }
    }    
return 0;
}
