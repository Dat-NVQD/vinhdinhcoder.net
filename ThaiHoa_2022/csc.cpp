#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fast
static ll a[30001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("csc.inp","r",stdin);
    freopen("csc.out","w",stdout);
    #endif
    int n;
    cin >> n;
    ll b[1001][1001]; 
    for(int i(1);i<=n;i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    return 0;
}