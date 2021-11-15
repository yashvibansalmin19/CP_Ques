#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    char a[n][m];
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            mp[a[i][j]]++;
        }
    }

    if (mp['C'] == 0 && mp['M'] == 0 && mp['Y'] == 0)
    {
        cout << "#Black&White";
    }
    else
    {
        cout << "#Color";
    }

    return 0;
}