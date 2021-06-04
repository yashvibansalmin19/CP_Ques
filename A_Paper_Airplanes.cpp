#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int k,n,s,p;
    cin>>k>>n>>s>>p;
    int l,z,ans;
    if(n%s==0){
       l=n/s;
    }
    else{
        l=(n/s)+1;
    }
    z=k*l;
    if(z%p==0){
       ans=z/p;
    }
    else{
        ans=(z/p)+1;
    }
cout<<ans;

// approach-2
// int sheet = (n+s-1)/s;
// int req=k*sheet;
// int ans=(req+p-1)/p;
// cout<<ans;
    return 0;
}