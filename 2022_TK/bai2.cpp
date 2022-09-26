#include<bits/stdc++.h>

using namespace std;
#define fast
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    #endif
    ll n,x; cin >> n;
    map<int,int> m;
    for(ll i(0);i<n;i++)
    {
        cin >> x;
        m[x]++;
    }
    ll max(0),ans;
    for(map<int,int>::iterator it = m.begin();it!=m.end();it++)
    {
        if((*it).second > max)
        {
            max = (*it).second;
            ans = (*it).first;
        }
    }
    cout << ans << " "<<max;
    return 0;
}