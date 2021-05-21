#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool palindrome(string s, int len){
    for(int i=0; i<len; i++){
        if(s[i]!=s[len-1-i]){
           break;
           return false;
        }
    }
    return true;
}
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n; 
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                cnt++;
            }
        }
        if(cnt==0){
            cout<<"DRAW"<<"\n";
        }
        else if(cnt%2==0){
            cout<<"BOB"<<"\n";
        }
        else if(cnt%2!=0){
            if(cnt==1){
                cout<<"BOB"<<"\n";
            }
            else{
                cout<<"ALICE"<<"\n";
            }
        }
    } 
return 0;
}