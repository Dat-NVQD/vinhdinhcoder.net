#include<bits/stdc++.h>
#define fast
#define ll long long
using namespace std;

static ll a[1000001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    #endif
    ll n; cin >> n;int x;
    map<int, int> m;
    for(int i(1);i<=n;i++)
    {
        cin >> x;
        m[x]++;
    }
    int ans = 0;
    for(map<int, int>::iterator i = m.begin();i!=m.end();i++)
    {
        if((*i).second > ans)
            ans = (*i).second;
    }
    cout << ans;
    return 0;
}