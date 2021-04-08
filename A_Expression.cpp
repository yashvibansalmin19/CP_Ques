#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int m = (a*b*c);
    int n = (a*b) + c;
    int p = a + (b*c);
    int q = (a+b)*c;
    int l = a+b+c;
    int z = a* (b+c);
    int max1 = max(m,n);
    int max2 = max(p,q);
    int Max1 = max(max1, max2);
    int Max2 = max(Max1, l);
    int Max = max(Max2, z);
    cout<<Max;
    return 0;
}