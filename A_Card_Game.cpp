#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    //6<7<8<9<T<J<Q<K<A
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<char,int>mp;
    mp.clear();
    mp['6']=1;
    mp['7']=2;
    mp['8']=3;
    mp['9']=4;
    mp['T']=5;
    mp['J']=6;
    mp['Q']=7;
    mp['K']=8;
    mp['A']=9;
    char k;
    cin>>k;
    string a,b;
    cin>>a>>b;
    if(a[1]==k && b[1]!=k){
        cout<<"YES";
    }
    else if(a[1]==b[1] && mp[a[0]]>mp[b[0]]){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}