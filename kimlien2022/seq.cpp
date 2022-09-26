#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fast
static ll a[1000001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("seq.inp","r",stdin);
    freopen("seq.out","w",stdout);
    #endif
    int n; cin >> n;
    ll ans,res,min,ires,imin;
    cin >> a[1];
    res = a[1];
    min = a[1];
    for(int i(2);i<=n;i++)
    {
        cin >> a[i];
        if(a[i] > res)
        {   
            res = a[i];
            ires = i;
        }
        if(a[i]<min)
        {   
            min = a[i];
            imin = i;
        }
        if(res > min && ires > imin)
            ans = res - min;
    }
    cout << ans;
    return 0;
}