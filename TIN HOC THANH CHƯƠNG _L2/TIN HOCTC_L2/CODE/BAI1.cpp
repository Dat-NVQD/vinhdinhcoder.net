#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int n;
int a[N];

int main()
{
  freopen("BAI1.INP", "r", stdin);
  freopen("BAI1.OUT", "w", stdout);
  cin>>n;
  for (int i = 1; i <= n; i++)
    {
    int u;
    cin>>u;
    a[u]++;
  }
  for (int i = 1; i < N; i++) {
    if (a[i] == 1) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
