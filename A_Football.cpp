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
    string ans,s;
    vector<string>v;
    map<string,int>mp;
    int maxN=0;
 for(int i=0; i<n; i++){
     cin>>s;
     v.push_back(s);
     mp[v[i]]++;
      if(mp[v[i]]>maxN){
        maxN=mp[v[i]];
        ans=v[i];
    }
 }

    cout<<ans;
    return 0;
}