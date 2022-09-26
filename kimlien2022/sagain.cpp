#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fast
static ll a[300001];
bool duyet(map<char, int> m, ll k)
{
    for(map<char, int>::iterator i = m.begin();i!=m.end();i++)
    {
        if((*i).second == k)
            return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("sagain.inp","r",stdin);
    freopen("sagain.out","w",stdout);
    #endif
    ll k;
    cin >> k;
    string n; cin >> n;
    map<char, int> m;
    char x;
    for(ll i(0);i<n.size();i++)
    {
        m[n[i]]++;
    }
    if(duyet(m,k))
        cout << "A";
    else   
        cout << -1;
    return 0;
}