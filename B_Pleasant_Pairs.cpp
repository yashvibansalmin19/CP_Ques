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
        int a[n];
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
               if((a[i]*a[j])==(i+j)){
                   count++;
               }
            }
        }
        cout<<count<<"\n";  
    }
return 0;
}