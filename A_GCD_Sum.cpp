#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sumOfDig(ll n){
      ll sum=0;
      while(n!=0){
      sum+=n%10;
      n/=10;}
      return sum;
}
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    ll a;
    cin>>a;
    ll gcdSum= __gcd(a, sumOfDig(a));
    while(gcdSum<=1){
        a++;
        gcdSum= __gcd(a, sumOfDig(a));
    }
    cout<<a<<"\n";
} 
return 0;    
}