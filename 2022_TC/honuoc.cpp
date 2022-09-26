#include<bits/stdc++.h>

using namespace std;
#define fast
#define ll long long
static ll a[100001],b[1001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("honuoc.inp","r",stdin);
    freopen("honuoc.out","w",stdout);
    #endif

    ll n,t; cin >>n>>t;
    ll ans(0);
    for(ll i(1);i<=n;i++)
        cin >> a[i] >> b[i];
    for(ll i(0);i<=t;i++)
    {
        for(ll j(1);j<=n;j++)
        {
            ans = ans + a[j];
            a[j] = a[j] - b[j];
            if(a[j] < 0)
                a[j] = 0;
        }
        cout << ans <<"\n";
        ans = 0;
    }

    return 0;
}