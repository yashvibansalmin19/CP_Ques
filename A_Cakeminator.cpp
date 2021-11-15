#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  unsigned int r, c;
  cin >> r >> c;
  unsigned int row[r], col[c];
  string s;
  for (unsigned int i = 0; i < r; i++)
  {
    cin >> s;
    for (unsigned int j = 0; j < c; j++)
    {
      if (s[j] == 'S')
      {
        row[i] = 1;
        col[j] = 1;
      }
    }
  }
  unsigned int rr = 0, cc = 0;
  for (unsigned int i = 0; i < r; i++)
  {
    rr += row[i];
  }
  for (unsigned int j = 0; j < c; j++)
  {
    cc += col[j];
  }
  unsigned int ans = (r * c) - (rr * cc);
  cout << ans;
  return 0;
}