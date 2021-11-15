#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, ans = 0;
    cin >> n >> m;
    char s[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        bool wasBest = false;
        for (int j = 0; j < m; j++)
        {
            bool isBest = true;
            for (int k = 0; k < n; k++)
            {
                if (s[k][j] > s[i][j])
                {
                    isBest = false;
                }
            }
            if (isBest)
            {
                wasBest = true;
            }
        }
        if (wasBest)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}