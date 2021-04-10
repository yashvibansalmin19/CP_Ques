//This is a solution using dynamic programming;

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int TargetSum (vector<int>a, int Sum){
        int N = a.size();
     
        int t[N+1][Sum+1];
        memset(t, 1, sizeof(t));
        for(int i=0; i<N+1; i++){
            for(int j=0;j<Sum+1; j++){
                int x = count(a.begin(),a.begin()+i,0);
                int res = pow(2,x);
                if(i==0){
                    t[i][j]=0;
                }
                if(j==0){
                    t[i][j]=res;
                }
            }
        }
        for(int i=1; i<N+1; i++){
            for(int j=1;j<Sum+1; j++){ 
                if(a[i-1]<=j){
                    t[i][j]= t[i-1][j]+t[i-1][j-a[i-1]];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }    
        return t[N][Sum];
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum =0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        int NewSum = (sum+target)/2;
        int ans = TargetSum (nums, NewSum);
        if((target+sum)%2!=0 || sum<target){
            return 0;
        }
        else{
        return (ans);
        }
    }
    
};

