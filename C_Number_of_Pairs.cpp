#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int>v(n);
        for(int &e:v){
            cin>>e;
        }
        sort(v.begin(), v.end());
   
        ll ans=0;
        for(int i=0; i<n; i++){
           int x = l-v[i]; 
           int y = r-v[i]; 

           ll c1=lower_bound(v.begin()+i+1, v.end(), x)-v.begin(); //first min element greater than or equal to x
           ll c2=upper_bound(v.begin()+i+1, v.end(), y)-v.begin(); //first element greater than y-1

           ans+= abs (c1-c2);

        }
        cout<<ans<<"\n";
    }
    return 0;
}    