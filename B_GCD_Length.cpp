#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //Method-1

    // int t;
    // cin>>t;
    // while(t--){
    //     int a,b,c;
    //     cin>>a>>b>>c;
    //     int x = pow(10,a-1);
    //     int y = pow(10,c-1)*(pow(10,b-c)+1);
    //     cout<<x<<" "<<y<<"\n";   
    // }    

    //Method-2
    
    ll t = 1;
	cin >> t;
	while (t--)
	{
		ll a,b,c, f = 0;
		cin >> a >> b >> c;
		
		ll mn = min(a,b);
		ll mx = max(a,b);
		if (mn == a)
		f = 0;
		else
		f = 1;
		ll p1 = 1;
			--mn;
			while(mn--){
				p1*=10;
			}
		    --mx;
			ll p2 = 1;
			while(mx--){
				p2*=10;
			}
		     ll add = 1;
		     --c;
		     while(c--){
		     	add*=10;
		     }
		    p2+=add;
		    if(!f)
		    cout<<p1<<" "<<p2<<endl;
		    else
		    cout<<p2<<" "<<p1<<endl;
    }
return 0;
}
