#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(a - i) < abs(b - i))
        {
            cnt1++;
        }
        else if (abs(a - i) > abs(b - i))
        {
            cnt3++;
        }
        else
        {
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3;
    return 0;
}