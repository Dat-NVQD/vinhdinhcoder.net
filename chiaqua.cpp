#include<bits/stdc++.h>
#define fast
#define ll long long
using namespace std;

static ll a[1000001];
int UCLN(ll x, ll y)
{
    if(x == 0 || y == 0)
        return x + y;
    while(x!=y)
    {
        if(x>y)
            x -= y;
        else if(x < y)
            y -= x;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    #endif
    ll x, y;
    set<ll> s;
    cin >> x >> y;
    int ucln = UCLN(x,y);
    for(ll i(1);i<=ucln;i++)
    {
        if(x%i==0)
            s.insert(i);
    }   
    ll ans = 0;
    for(set<ll>::iterator i = s.begin();i!=s.end();i++)
    {
        if(y%(*i)==0)
            ans++;
    }
    cout << ans;
    return 0;
}