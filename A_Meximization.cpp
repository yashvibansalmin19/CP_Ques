#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    int n;

    for(int i=0; i<t; i++){
        cin>>n;
        vector<int> a(n);
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        sort(a.begin(), a.end());
        vector<int>b;
        for(int j=0; j<n; j++){
            if(j==0 || a[j]!=a[j-1]){
              b.emplace_back(a[j]);
            }
        }
        for(int j=0; j<n; j++){
            if(j>0 && a[j]==a[j-1]){
              b.emplace_back(a[j]);
            }
        }
        for(auto x : b){
            cout << x << " ";
        }
        cout<<"\n";
    }
    return 0;
}