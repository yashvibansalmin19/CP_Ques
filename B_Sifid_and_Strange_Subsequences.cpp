#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int mini=INT_MAX, ans=1;
        for(int i=1; i<n; i++){
            mini=min(mini, abs(a[i]-a[i-1]));
            if(mini<a[i]){
                break;
            }
            else{
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}