#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k,n;
    cin>>k>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0,j=k-1,ans=INT_MAX;
    while(j<n && i<j){
        ans=min(ans,a[j]-a[i]);
        i++; j++;
    } 
    cout<<ans;
    return 0;
}