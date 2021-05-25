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
    ll sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    int half=0,p=0;
    for(int i=0; i<n; i++){
        half+=a[i];
        if((2*half)>=(sum)){
           p=i+1;
           break;
        }
        else{
            continue;
        }
    }
    cout<<p;
    return 0;
}