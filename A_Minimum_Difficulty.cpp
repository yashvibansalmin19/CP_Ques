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
    int diff=0, min_diff=INT_MIN, final_d=INT_MAX;
    for(int i=0; i<n-1; i++){
        diff=a[i+1]-a[i];
        min_diff=max(diff,min_diff); 
    }
    for(int i=0; i<n-2; i++){
        diff=a[i+2]-a[i];
        final_d=min(diff,final_d);
    }
    cout<<max(min_diff, final_d);
    return 0;
}