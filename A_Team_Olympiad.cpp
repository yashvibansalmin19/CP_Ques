#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int c1[5000], c2[5000], c3[5000], k, x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            c1[x] = i + 1;
            x++;
        }
        else if (a[i] == 2)
        {
            c2[y] = i + 1;
            y++;
        }
        else
        {
            c3[z] = i + 1;
            z++;
        }
    }
    k = min(x, min(y, z));
    cout << k << "\n";
    for (x = 0, y = 0, z = 0; x < k, y < k, z < k; x++, y++, z++)
    {
        cout << c1[x] << " " << c2[y] << " " << c3[z] << "\n";
    }

    return 0;
}