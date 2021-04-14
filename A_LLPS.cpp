#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    char c ='a';
    int n = s.size();
    for(int i=0; i<n; i++){
       if(s[i]>=c){
        c =s[i];
       }
    }
    int x = count(s.begin(), s.end(), c);
    for(int i=1; i<=x; i++){
        cout<<c;
    }

return 0;
}
