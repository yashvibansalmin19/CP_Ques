#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sol(vector<ll> v)
{
    ll ans = INT_MIN;
    while (v.size() > 0)
    {
        ll maxNo = *min_element(v.begin(), v.end());
        v.erase(v.begin() + (min_element(v.begin(), v.end()) - v.begin()));

        for (ll i = 0; i < v.size(); i++)
        {
            v[i] = v[i] - maxNo;
        }
        ans = max(maxNo, ans);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a;
        for (ll i = 0; i < n; i++)
        {
            ll el;
            cin >> el;
            a.push_back(el);
        }
        ll res = sol(a);
        cout << res << "\n";
    }
    return 0;
}