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
        if((n-k)<2 && k!=0){
            cout<<"-1"<<"\n";
        }    
        else if(k==0){
            for(ll i=0; i<n; i++){
                a[i]=i+1;
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
        else{
                  
        }
    } 
return 0;
}
