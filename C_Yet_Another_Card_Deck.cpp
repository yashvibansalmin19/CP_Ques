#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n,q;
    cin>>n>>q;
    int a[n], b[q];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<q; i++){
        cin>>b[i];
    }
    int pos,k;
    for(int i=0; i<q; i++){
        for(int j=0; j<n; j++){
            if(b[i]==a[j]){
                pos=j+1;
                cout<<pos<<" ";
                k=j;
                for(int r=0; r<k; r++){
                swap(a[k], a[r]);
                }
                break;
            }
            else{
                continue;
            }
        }
        
    }
    
return 0;
}
