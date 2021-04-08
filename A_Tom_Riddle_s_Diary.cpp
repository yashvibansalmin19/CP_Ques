#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,count;
    string s;
    cin>>n;
    map<string,int>m;
    for(int i=0; i<n; i++){
        cin>>s;
        if(m.find(s)==m.end()){
            m[s]=1;
        }
        else{
            m[s]++;
        }
        if(m[s]==1){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
    }
}