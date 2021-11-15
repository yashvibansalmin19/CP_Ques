#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    char a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    }
    int len=0,x,y;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]=='.'){
                len++;
            }
            if(len==m){
                x=i;y=j;
            }
        }
            
    }
    return 0;
}