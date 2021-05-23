#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int bal;
    cin>>bal;
    for(int i=1;i<=3;i++){
        int a,b;
        cin>>a>>b;
        if(bal==a)
        bal=b;
        else if(bal==b)
        bal=a;
    }
    cout<<bal;
 
    return 0;
}
