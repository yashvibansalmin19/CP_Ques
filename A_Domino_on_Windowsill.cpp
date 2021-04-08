#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t,n,k1,k2,w,b,W,B;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>k1>>k2>>w>>b;
        if(k1!=0 || k2!=0){
          W= (k1+k2)/2;
        }
        else{
            W=0;
        }
        B= ((2*n)-(k1+k2))/2;
        if(W>=w && B>=b){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }

return 0;    
}