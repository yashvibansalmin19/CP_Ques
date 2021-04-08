#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,B,n=0;
    cin>>a>>B;
    while(a<=B){
       a *=3;
       B *=2;
       n++;
    }
    cout<<n;
}