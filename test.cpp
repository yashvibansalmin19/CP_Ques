#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>s;
        for(int i=0; i<candyType.size(); i++){
            s.insert(candyType[i]);
        }
    }
    int k = candyType.size();
    int n = s.size();
    int ans;
    ans = min(n,k/2);
    
    return ans;
}
};

