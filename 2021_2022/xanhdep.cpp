#include<bits/stdc++.h>
using namespace std;
#define fast
#define ll long long
static long a[101][10001];

void timcay(string s,ll dem,ll &max)
{
    for(ll i(1);i<s.length();i++)
    {
        if(s[i] == s[i-1])
            a[dem][i] = a[dem][i-1] + 1;
        if(a[dem][i] > max)
            max = a[dem][i];
    }
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
    string s;
    ll dem(0),max(0);
    for(ll i(0);i<n;i++)
    {
        cin >> s;
        timcay(s,dem,max);
        dem++;
    }
    cout << max+1;

    return 0;
}