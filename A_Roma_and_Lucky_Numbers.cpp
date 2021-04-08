#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int p=0;
    for(int i=0;i<n;i++){
       if((count(a[i].begin(), a[i].end(), '4') + count(a[i].begin(), a[i].end(), '7'))<=k){
           p++;
       }
       else if((count(a[i].begin(), a[i].end(), '4') + count(a[i].begin(), a[i].end(), '7'))==0){
           p++;
       }
       
    }
    cout<<p;  
    return 0;
}