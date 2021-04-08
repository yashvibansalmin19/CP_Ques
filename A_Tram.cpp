#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max_train=0, capacity=0;
    cin>>n;
    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        max_train-=a;
        max_train+=b;
        capacity=max(max_train, capacity);
    }
    cout<<capacity;
    return 0;
}