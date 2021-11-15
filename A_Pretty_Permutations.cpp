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
        for(int i=0; i<n; i++){
            a[i]=i+1;
        }
        if(n%2==0){
        for(int i=0; i<n-1; i+=2){
            swap(a[i],a[i+1]);
        }}
        else{
            
        }
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";  
    }
return 0;
}