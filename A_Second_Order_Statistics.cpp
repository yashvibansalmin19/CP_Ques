#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,x;
    cin>>n;
    set<int>s;
    for(int i=0; i<n; i++){
       cin>>x;
       s.insert(x);
    }
    set<int> :: iterator it = s.begin();
    advance(it, 1);
    int a = *it;
    if((int)s.size()==1){
        cout<<"NO";
    }
    else{
    cout<<a;}

}