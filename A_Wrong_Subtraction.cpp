#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a,b;
    cin>>a>>b;
    while (b!=0){
       if(a%10==0){
           a/=10;
       }
       else{
           a-=1;
       }
        b--;
    }
    cout<<a;
    return 0;
}