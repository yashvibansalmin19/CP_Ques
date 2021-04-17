#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, p1=0, p2=0, k=0;
        cin>>n;
        string s;
        cin>>s;
        
        for(int i=0; i<n; i++){
            if(s[i]== 'T'){
                p1++;
            }
            else{
                p2++;
            }
            if(p2>p1){
                k=1;
            }
        }
        
        p1=0; p2=0;

        for(int i=n-1; i>=0; i--){
            if(s[i]== 'T'){
                p1++;
            }
            else{
                p2++;
            }
            if(p2>p1){
                k=1;
            }
        }
        if(p2!=n/3 || s[n-1]== 'M'){
            k=1;
        }
        if(k==1){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }      
return 0;
}
