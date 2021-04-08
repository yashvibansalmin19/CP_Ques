#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,v;
    cin>>n>>v;
  
    set <int> s; 
    for(int i=0; i<n; i++){
        cin>>k;
        int a[k];
        for(int j=0; j<k; j++){
            cin>>a[j];
        }
        for(int j=0; j<k; j++){
            if(a[j]<v){
                s.insert(i+1);
            }
        }
    }
    cout<<s.size()<<endl;
    for(auto it= s.begin(); it!=s.end(); it++){
        cout<< *it <<" ";
    }
    return 0;
}