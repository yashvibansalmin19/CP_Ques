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
        vector<int>v(n);
        for(int &i:v){
            cin>>i;
        }
        int maxPos= max_element(v.begin(), v.end())-v.begin();
        int minPos= min_element(v.begin(), v.end())-v.begin(); 
        
        int ans= min({max(maxPos,minPos)+1, n-min(maxPos, minPos), n-maxPos+minPos+1, n-minPos+maxPos+1});

        cout<<ans<<"\n";
    }
    return 0;
}    