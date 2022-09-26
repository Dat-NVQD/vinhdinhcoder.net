#include<bits/stdc++.h>
#define fast
#define ll long long
using namespace std;

static ll a[300001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.inp","r",stdin);
    freopen("output.inp","w",stdout);
    #endif
    ll n,k;
    cin >> n>>k;
    for(int i(1);i<=n;i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    ll ans = 0;
    for(int i(1);i<=k;i++)
        ans+=a[i];
    cout << ans;
    return 0;
}