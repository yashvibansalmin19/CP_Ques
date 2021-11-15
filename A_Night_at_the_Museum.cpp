#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    vector<pair<char, int>> v;
    int ans = min(abs('a' - s[0]), (26 - abs('a' - s[0])));
    for (int i = 0; i < s.size() - 1; i++)
    {
        int count = min(abs(s[i] - s[i + 1]), (26 - abs(s[i] - s[i + 1])));
        ans += count;
    }
    cout << ans;
    return 0;
}