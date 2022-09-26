#include<bits/stdc++.h>
#define fast
#define ll long long
using namespace std;

static ll a[10001],b[10001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.inp","r",stdin);
    freopen("output.inp","w",stdout);
    #endif
    
    ll n;
    //--------------------------------------------------
    cin >> n;
    ll then = n;
    ll ans = 0;
    if(n%3==0)
        ans+=2;
    ll k(1);
    for(int i(1);then!=0;i++)
    {
        a[i] = (then % 10) % 3;
        then = then/10;
        k++;
    }
    ll res = 0;
    for(int i(1);i<=k;i++)
    {
        if(a[i]>0)
        {
            b[i] = b[i-1] + a[i];
        }
    }
    for(int i(1);i<=k;i++)
        if(b[i]%3!=0)
            ans++;
    cout << ans;
    return 0;
}
