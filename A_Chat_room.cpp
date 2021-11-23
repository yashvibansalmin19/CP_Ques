#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    string b ="hello";
    int j=0,cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==b[j]){
            j++;
            cnt++;
            if(cnt==5){
                break;
            }
        }
    } 
    if(cnt==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}