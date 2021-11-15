#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k,n;
    cin>>k>>n;
    int x=1;
    bool b = true;
    while(b){
        if((k*x) % 10==n || (k*x) % 10==0){
            b=false;
        }
        x++;
    }
cout<<x-1;
      
    return 0;
}