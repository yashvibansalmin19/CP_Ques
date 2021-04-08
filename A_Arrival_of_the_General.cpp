#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int max1=1;
    int min1=100;
    for(int i=0; i<n; i++){
        if(a[i]>max1){
           y=i;
           max1 = a[i];
        }
    }
    for(int i=n-1; i>=0; i--){
        if(a[i]<min1){
           x=i;
           min1 = a[i];
           }
    }
    if(y>x){
        cout<<y+n-x-2;
    }
    else{
        cout<<y+n-x-1;
    }
    return 0;
}