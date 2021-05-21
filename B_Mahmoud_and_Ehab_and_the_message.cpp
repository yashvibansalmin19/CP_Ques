#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[100005], cost[100005], grp[100005];
    map<string,int>mp;
    int n, k ,m;
    cin >> n >> k >> m;

    for(int i=1; i<=n; i++){
        string s;
        cin>>s;
        mp[s]=i;
    }
    for(int i=1;i<=n; i++){
        cin>>arr[i];
        cost[i]=INT_MAX;
    }
    for(int i=1; i<=k; i++){
        int x,a;
        cin>>x;
        while(x--){
            int a;
            cin>>a;
            grp[a]=i;
            cost[i]= min(cost[i],arr[a]);
        }
    }
    ll ans=0;
    while(m--){
        string t;
        cin>>t;
        ans+=cost[grp[mp[t]]];
    }
    cout<<ans;
    
return 0;
}