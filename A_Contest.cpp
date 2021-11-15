#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int misha=max((3*a/10), a-(a*c)/250);
    int vasya=max((3*b/10), b-(b*d)/250);
    if(misha==vasya){
        cout<<"Tie";
    }   
    else if(misha>vasya){
        cout<<"Misha";
    }
    else{
        cout<<"Vasya";
    }
    return 0;
}