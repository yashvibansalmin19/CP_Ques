#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n ;i++){
        cin>>a[i];
    }
    int sum=0, ans=INT_MAX;
    for(int i=0; i<n; i++){
        int v[a[i]];
        for(int j=0; j<a[i]; j++){
            cin>>v[j];
            sum=sum+5*v[j]+15;
        }
        ans=min(ans,sum);
        sum=0;
    }
    cout<<ans;
    return 0;
}