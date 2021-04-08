#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,count=0,x;
    cin>>n;
    n*=2;
    set<int>s;
    for(int i=0; i<n; i++){
        cin>>x;
        if(s.find(x)==s.end()){ //check if the element is present in the set
            s.insert(x);
        }
        else{
            s.erase(x);     //erase if present
        }
    count = max (count, (int)s.size()); //the size of set will give the ans
    }
    cout<<count;
}