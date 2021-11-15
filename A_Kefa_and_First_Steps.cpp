#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int max_len=1,len=1;
    for(int i=0; i<n-1; i++){
        if(a[i]<=a[i+1]){
           len++;
        }
        else{
            len=1;
        }
          max_len=max(max_len,len);
    }
    cout<<max_len;
    return 0;
}