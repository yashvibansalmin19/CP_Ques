#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        if((sum%n)==0){
            int l =sum/n;
            int cnt=0;
            for(int i=0; i<n; i++){
                if(a[i]>l) cnt++;
            }
            cout<<cnt<<"\n";

        }
        else{
            cout<<-1<<"\n";
        }
    }


    return 0;
}    