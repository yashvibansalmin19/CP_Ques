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
    int ans=1,sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n, greater<int>());
    int sum2=a[0];
    for(int i=1; i<n; i++){
       if((sum-sum2)>=sum2){
         ans++;
         sum2+=a[i];
       }
    }
    cout<<ans;
    return 0;
}