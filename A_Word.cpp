#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(int i=0; i<s.size(); i++){
       if(s[i]>=65 && s[i]<=90){
           c1++;
       }
       else{
           c2++;
       }
    }
    if(c1>c2){
        transform (s.begin(), s.end(), s.begin(), :: toupper);
    }
    else{
        transform (s.begin(), s.end(), s.begin(), :: tolower);
    }
    cout<<s;
return 0;
}    
    