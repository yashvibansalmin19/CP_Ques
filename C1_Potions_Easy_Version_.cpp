#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n ;i++){
        cin>>a[i];
    }
    sort(a,a+n, greater<int>());
    int cnt=0,tot=0;
    for(int i=0; i<n; i++){
      if(a[i]>=0){
          cnt+=a[i];
          tot++;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]<0){
          cnt+=a[i];
          if(cnt>=0){
              tot++;
            }
          else{
              break;
            }
        }
    } 
    cout<<tot;
    return 0;
}