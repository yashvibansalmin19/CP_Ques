#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,a,b,c,t;
    cin>>n>>a>>b>>c>>t;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=0;
    if(b>=c){
        ans=n*a;
    }
    else{
        int s=c-b;
    for(int i=0; i<n; i++){
       ans=ans+a+s*(t-arr[i]);
    }
    }
    cout<<ans;
    return 0;
}