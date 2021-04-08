#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s; 
    int p=0,m;
    m=s.length();
    while(m>1){
        int sum=0;
        for(int i=0; i<m; i++){
            sum+=s[i]-'0';
        }
    s = to_string(sum);
    m = s.length();
    p++;
    }
    cout<<p;
    return 0;
}