#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>c){
            swap(a,c);
        }
        int d = (a+c-2*b);
        int ans= (d%3==0) ? 0 :1;
        cout<<ans<<"\n";
        
    }
    return 0;
}