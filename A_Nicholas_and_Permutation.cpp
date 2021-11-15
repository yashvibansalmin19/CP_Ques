#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
   int x,y,dist;
   for(int i=0; i<n; i++){
       if(a[i]==1){
           x=i;
       }
       else if(a[i]==n){
           y=i;
       }
   }   
    if(x<y){
        swap(x,y);
    }
    
    dist=max(x-0, n-1-y);
   
    cout<<dist;

   return 0;
}