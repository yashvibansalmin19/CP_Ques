#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   int n,k;
   cin>>n>>k;
//    int i=1,m;
//    while(m<=n){
//        m=k*i;
//        i++;
//    } 
//    cout<<m;
int x = (n/k)+1;
cout<<x*k;
   return 0;
}