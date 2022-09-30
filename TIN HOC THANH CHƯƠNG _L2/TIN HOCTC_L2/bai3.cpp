#include<bits/stdc++.h>

using namespace std;
#define fast
#define ll long long
bool kt(ll a,ll n)
{
    
    ll res = 0;
    if(a>1 && a<=3)
    {
        if(a*a <= n)
            return true;
        return false;
    }
    for(ll i(2);i<=sqrt(a);i++)
        if(a%i==0)
            return false;
    if(a*a <= n)
        return true;
    return false;
}

int main()
{   
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("bai3.inp","r",stdin);
    freopen("bai3.out","w",stdout);
    #endif
    ll ans = 0;
    ll n; cin >> n;
    for(ll i(2);i<=sqrt(n);i++)
    {
        if(kt(i,n))
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}