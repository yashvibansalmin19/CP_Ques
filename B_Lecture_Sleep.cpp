#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int res=0;
    for(int i=0; i<n; i++){
        cin>>b[i];
        if(b[i]==1){
            res+=a[i];
            a[i]=0;
        }
    }

    int cnt=0;

    int ans=INT_MIN;
    int sum=0;
    int i=0,j=0;
    while(j<n){
        sum+=a[j];
        if(j-i+1<m){
            j++;
        }
        else if((j-i+1)==m){
            
            ans=max(ans,sum);
            sum-=a[i];
            i++;j++;
        }
    }
    
    cout<<res+ans;
    return 0;
}