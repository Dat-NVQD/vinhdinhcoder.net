#include<bits/stdc++.h>
using namespace std;
#define fast
#define ll long long
static ll a[200001];
static ll le[100002], chan[100002];

void day(ll x,ll n,ll mang[])
{
    ll dem(0);
    for(ll i(1);i<=n;i++)
    {
        if(a[i]%2==x)
        {
            dem++;
            mang[dem] = a[i];
        }
    }
}

int sovong(ll i,ll n, ll mang[],ll x)
{
    
    ll vong(0);
    for(;i <= x;)
    {
        vong++;
        for(ll j(1);j<=n/2;j++)
        {
            if(mang[j] == i)
                i+=2;
        }
    }
    return vong;
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    #endif

    ll n;
    cin >> n;
    for(ll i(1);i<=n;i++)
    {
        cin >> a[i];
    }
    day(1,n,le);
    day(0,n,chan);
    cout << sovong(1,n,le,n-1) <<"\n"<<sovong(2,n,chan,n);

    return 0;
}