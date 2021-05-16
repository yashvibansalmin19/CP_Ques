#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    int k;
    while(t--){
        cin>>k;
        int w = 100-k;
        int n,m;
        n = __gcd(k,w);
        m = (100)/n;
        cout<<m<<"\n"; 
    }
    return 0;
}