#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll d = (b / 4) * 4 + 1;
        b %= 4;
        for (ll i = 0; i < b; i++)
        {
            if (a % 2 == 0)
            {
                a -= d;
                d++;
            }
            else
            {
                a += d;
                d++;
            }
        }
        cout << a << "\n";
    }
    return 0;
}