#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int p=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]!=a[0][0] && i==j){
                p=0;
                break;
            }
            else if(a[i][j]!=a[0][0] && (i == n-1-j))
            {
                 p=0;
                 break;
            }
            else if(a[i][j]!=a[0][1] && (i != n-1-j) && i!=j){
                p=0;
                break;
            }
            else if(a[i][j]==a[0][0] && i!=j && (i != n-1-j)){
                p=0;
                break;
            }
        }
    }
    if(p==0){
        cout<<"NO";
    }
    else if(p==1){
        cout<<"YES";
    }
    return 0;
}