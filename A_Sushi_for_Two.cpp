#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int b[n];
    fill(b,b+n,1);
    int j=0;
    for(int i=1; i<n;i++){
        if(a[i]==a[i-1]){
          b[j]++;
        }
        else{
            j++;
        }
    }//array b[] stores lengths of continuous subarrays with same digit
    int ans=0;
    for(int i=1; i<=j; i++){
          ans=max(ans, min(b[i],b[i-1]));
    }
    cout<<(2*ans);
    
    return 0;
}