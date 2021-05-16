#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll a,b;
    cin>>a>>b;
        while(a!=0 && b!=0 && ((a>=2*b) || (b>=2*a))){
           if(a>=2*b){
              a%=2*b;
            }
            else if(b>=2*a){
              b%=2*a;
            }
        }
    cout<<a<<" "<<b;
    
return 0;
}    
    