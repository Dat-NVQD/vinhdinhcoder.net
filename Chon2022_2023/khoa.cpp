#include<bits/stdc++.h>
#define fast
#define ll long long
using namespace std;

bool daydoixung(string s, ll n)
{
    for(ll i(0);i<n/2;i++)
        if(s[i] != s[n-1-i])
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("khoa.inp","r",stdin);
    freopen("khoa.out","w",stdout);
    #endif

    string s;cin >>s;
    string rs;
    ll n = s.length(),t(0),a[501][501];
    
    for(int i(0);i<n;i++)
    {
        if(daydoixung(s,n))
        {
            a[t][0] = i;
            if(i==0)
            {
                a[t][0] = n;
            }
            a[t][1] = i+1;
            ++t;
        }
        s = s+s[0];
        s.erase(0,1);
    }
    if(t == 0)
    {    
        cout << -1;
        return 0;
    }
    
    cout << t << "\n";
    for(ll i(0);i<t;i++)
    {
        for(int j(0);j<2;j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}