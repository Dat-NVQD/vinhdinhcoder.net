#include<bits/stdc++.h>

using namespace std;
#define fast
#define ll long long

bool xuly(ll n)
{
    for(ll i(2);i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("bai3.inp","r",stdin);
    freopen("bai3.out","w",stdout);
    #endif
    ll n,x;
    cin >> n;
    for(ll i(0);i<n;i++)
    {
        cin >> x;
        for(ll j(x/2);j>=1;j--)
        {
            if(x%j == 0)
                if(xuly(j))
                {
                    cout << j <<"\n";
                    break;
                }
        }
    }
    return 0;
}