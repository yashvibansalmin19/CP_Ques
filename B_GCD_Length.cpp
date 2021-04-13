#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x = pow(10,a-1);
        int y = pow(10,c-1)*(pow(10,b-c)+1);
        cout<<x<<" "<<y<<"\n";   
    }    
return 0;
}
