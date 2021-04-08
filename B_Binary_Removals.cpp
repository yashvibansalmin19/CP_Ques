#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    string s;
    for(int i=0; i<t; i++){
        cin>>s;
        int k = s.find("11");
        int j = s.rfind("00");
        if(k != -1 && j != -1 && k < j){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
return 0;    
}