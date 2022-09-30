#include<bits/stdc++.h>
#define ll long long
ll a[1000002] = {0};
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    #endif
    int n;
    cin >> n;
    cin.ignore();
    string s; cin >> s;
    ll ans = 0;
    for(int i(1);i<=n;i++)
    {
        if(s[i-1]=='U') a[i] = a[i-1]+1;
        else a[i] = a[i-1]-1;

    }
    for(int i(0);i<=n;i++)
    {
        if(a[i]==0)
            if(a[i+1]<0)
                ans++;
    }
    cout << ans;
    return 0;
}