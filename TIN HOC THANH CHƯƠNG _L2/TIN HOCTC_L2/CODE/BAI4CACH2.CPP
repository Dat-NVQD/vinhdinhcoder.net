#include <bits/stdc++.h>
using namespace std;

#define maxn int (1e6)

int s1[maxn + 1], s2[maxn + 1], a[maxn + 1];

int main () {
	ios::sync_with_stdio (false); cin.tie (0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) s1[i] = s1[i - 1] + (a[i] == 1);
	for (int i = n; i >= 1; i--) s2[i] = s2[i + 1] + (a[i] == 2);
	int res = INT_MAX;
	for (int i = 1; i <= n; i++)
		res = min (res, n - s1[i] - s2[i]);
	cout << res;
	return 0;
