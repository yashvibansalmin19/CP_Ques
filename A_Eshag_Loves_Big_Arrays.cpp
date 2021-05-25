#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
   
    set<int>s;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a, a+n);
    int c=0;
    for(int i=n-1; i>=0; i--){
        if (a[i]>sum/(i+1)) {sum-=a[i]; c++;}
        else break;

    }
    cout<<c<<"\n";
    
    }
    return 0;
}