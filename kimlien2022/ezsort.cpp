#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fast
static ll a[300001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("ezsort.inp","r",stdin);
    freopen("ezsort.out","w",stdout);
    #endif
    int n; cin >> n;
    int s = 0;
    for(int i(1);i<=n;i++)
    {
        cin >> a[i];
        s++;
        if(a[i] == n)
            break;
    }
    ll res(0);
    for(int i =s;i>1;i--)
    {
        if(a[i-1] == a[i]-1)
        {
            res++;
        }
        else 
            break;
    }
    cout << n - res - 1;
    return 0;
}