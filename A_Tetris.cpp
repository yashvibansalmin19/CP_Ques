#include<bits/stdc++.h>
using namespace std;
#define ll long long
int gp[10004];
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[m];
    map<int,int>mp;
    int minn=INT_MAX;
    for(int i=0; i<m; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=1; i<=n; i++){
        minn=min(minn, mp[i]);
    }
    cout<<minn;
    return 0;
}