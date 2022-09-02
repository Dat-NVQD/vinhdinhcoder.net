#include<bits/stdc++.h>
#define fast
#define ll long long
using namespace std;

void uc(ll a, ll b[],ll &max)
{
    for(ll i(1);i<=a;i++)
        if(a%i == 0)
            b[i]+=1;
    if(a > max)
        max = a;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    #endif

    ll n; cin >> n;
    ll a[32001],b[32001],max(0);
    for(ll i(0);i<=200;i++)
    {
        b[i+30000] = 0;
    }
    for(ll i(0);i<n;i++)
    {
        cin >> a[i];
    }
    for(ll i(0);i<n;i++)
    {
        uc(a[i],b,max);
    }
    ll dem(1), i(1), luui(1);
    while(dem <= max)
    {
        if(b[i] <= b[i+dem])
        {
            luui = i + dem;
        }
        dem++;
    }
    cout << luui;


    return 0;
}