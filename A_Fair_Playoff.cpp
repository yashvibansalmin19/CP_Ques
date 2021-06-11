#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a[4];
        for(int i=0; i<4; i++){
            cin>>a[i];
        }
        int max1=max(a[0],a[1]);
        int max2=max(a[2],a[3]);
        sort(a,a+4);
        if((max1==a[2]||max1==a[3])&&(max2==a[2]||max2==a[3])){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
         cout<<"\n";
    }
    return 0;
}