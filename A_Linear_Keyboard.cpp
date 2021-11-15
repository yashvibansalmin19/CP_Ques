#include <bits/stdc++.h>
using namespace std;
int sol(string m, string n)
{
    int v = 0;
    for (int i = 0; i < n.size() - 1; i++)
    {
        int x = m.find(n[i + 1]);
        int y = m.find(n[i]);
        v = v + abs(x - y);
    }
    return v;
}

int main()
{
    int t;
    cin >> t;
    int ans = 0;
    string s, k;
    while (t--)
    {
        cin >> s >> k;
        ans = sol(s, k);
        cout << ans << "\n";
    }
    return 0;
}