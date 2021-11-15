#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   int n,k;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
   int sum=0;
   for(int i=0; i<n; i++){
      sum+=a[i];
   }
   sum=sum/(n/2);
   for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           if(a[i]+a[j]==sum && i!=j){
               cout<<i+1<<" "<<j+1<<"\n";
               a[i]=0;
               a[j]=0;
           }
       }
   }
   
   return 0;
}