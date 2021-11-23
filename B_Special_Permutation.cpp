#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(a > n / 2 + 1 || b < n / 2){
            cout<<-1<<"\n";
        }
        else{
            int k=n;
            cout<<a<<" ";
            for(int i=1; i<n/2; i++){
                if(k!=b){ 
                   cout<<k<<" ";
                   k--;
                }
                else{
                    k--;
                    cout<<k<<" ";
                }
            }
            cout<<b<<" ";
            for(int i=1; i<n/2; i++){
                if(i!=a){ 
                   cout<<i<<" ";
                }
                else{             
                    cout<<i+1<<" ";
                    i++;
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}