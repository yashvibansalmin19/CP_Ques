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
        ll a, b;
        cin >> a >> b;
        if((a+b)%2==0){
           int x, y;
           if(a%2!=0 && b%2!=0){
              if(a>b){
                  x=(a-b)/2;
                  y=((a+b)/2)-x;
                }
                else{
                  y=(b-a)/2;
                  x=((a+b)/2)-y;
                }    
           }
           else{
              x=a/2;
              y=b/2;
            }
           cout<<x<<" "<<y<<"\n";
        }
        else{
            cout<<-1<<" "<<-1<<"\n";
        }
    }
    return 0;
}