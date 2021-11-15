#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i]; 
        }
        sort(a, a+n);
        int count=1;
        for(int i=1; i<n; i++){
           count++;
           if(a[i-1]!=a[i]){
             count++;
           }
        }
        cout<<count<<"\n";
    }
return 0;
}