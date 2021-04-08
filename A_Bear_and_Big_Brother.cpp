#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,A,n=0;
    cin>>a>>A;
    while(a<=A){
       a *=3;
       A *=2;
       n++;
    }
    cout<<n;
}