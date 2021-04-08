#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int n,m,l,r,pos=0,interv,p;
    cin>>n>>m;
    int a[n];
    
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==1){
            pos++;
        }
    }
    p = min(pos, n-pos);
    for(int i=0; i<m; i++){
        cin>>l>>r;
        interv= r-l+1;
        if((interv % 2 == 0) && (interv)<=(2*p)){
            cout<<"1"<<endl;
        }
        else{
                cout<<"0"<<endl;
            }
    } 
    return 0;
} 