#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0; i<n; i++){
        if(a<b) swap(a,b);
        while(s[i]=='.' && i<n){
            if(a>0) {
                ans++;
            }
            a--;
            swap(a,b); // so that no student programmer or student athlete sits together
            i++;
        } 
    }
    cout<<ans;
    return 0;
}