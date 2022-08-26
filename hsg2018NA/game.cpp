#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fast

bool UC(ll max, ll a[], ll n)
{
    ll du = a[1]%max;
    for(int i(1);i<=n;i++)
        if(a[i]%max != du)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("game.inp","r",stdin);
    freopen("game.out","w",stdout);
    #endif
    ll n;ll a[101],max(0),min(10000000000000009);
    cin >> n;
    for(int i(1);i<=n;i++)
    {
        cin >> a[i];
        if(max<a[i])
            max=a[i];
    }
    //------------ tim du -----------
    for(ll i(2);i<=max/2;i++)
    {
        if(UC(i,a,n))
            cout << i << " ";
    }

    return 0;
}