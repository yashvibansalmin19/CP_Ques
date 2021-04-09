#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    map<int,int>m;
    for(int i=0; i<n; i++){
        if(m.find(a[i])==m.end()){
            m[a[i]]=1;
        }
        else{
            m[a[i]]++;
        }
        if(m[a[i]]>n/k){
            cout<<a[i]<<" "<<m[a[i]]<<"\n";
        }
        else{
            continue;
        }
    }
    return 0;
}