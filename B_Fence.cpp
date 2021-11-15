#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int sum =0,p;
    for(int i=0; i<k; i++){
        sum+=a[i];
    }
    int summ=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<k+i; j++){
           summ+=a[j];
        }
        if(summ<sum){
            sum=summ;
            p=i;
        }
        else{
            continue;
        }
    }
    cout<<p+1;
return 0;
}
