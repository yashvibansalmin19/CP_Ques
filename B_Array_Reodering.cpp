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
            cin>>a[i];
        }
        vector<int>v,v1;
        
        for(int i=0; i<n;i++){
            if(a[i]%2==0){
                v.push_back(a[i]);
            }
            else{
                v1.push_back(a[i]);
            }
        }
        for(int i=0; i<v1.size(); i++){
            v.push_back(v1[i]);
        }
        int k=0;
        for(int i=0; i<n; i++){
            for(int j=i+1;j<n; j++){
                int c= __gcd(v[i], 2*v[j]);
                if(c>1) {k++;}
            }
        }
        cout<<k<<"\n";
    }
    return 0;
}