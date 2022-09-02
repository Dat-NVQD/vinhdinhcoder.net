#include<bits/stdc++.h>
#define fast
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    #endif

    ll n; cin >> n;
    ll a[64000],b[64001];
    for(ll i(0);i<n;i++)
    {
        cin >> a[i];
    }
    ll max(0);
    for(ll i(0);i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            b[i+1] = b[i] + 1;
            if(b[max] < b[i+1])
                max = i+1;
        }
    }
    cout << max - (max - b[max] -1) << "\n";
    for(ll i(max-b[max]);i<= max;i++)
        cout << a[i] << " ";

    return 0;
}