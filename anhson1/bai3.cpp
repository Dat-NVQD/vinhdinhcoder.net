#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fast
static ll a[100001];

int xuli(int ans, int n, int &k, ll &ians)
{
    int luui, res;
    for(int i(1);i<n - k;i++)
    {
        res = a[i]+a[i+1];
        if(res < ans)
        {
            ans = res;
            luui = i;
            ians = i+1;
        }
    }
    a[luui] = ans;
    a[ians] = 0;
    return ans;
}

void sapxep(int ians, int n)
{
    for(int i = ians; i<n; i++)
    {
        int temp = a[i+1];
        a[i+1] = a[i];
        a[i] = temp;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("factory.inp","r",stdin);
    freopen("factory.out","w",stdout);
    #endif
    int n;
    cin >> n;
    for(int i(1);i<=n;i++)
    {
        cin >> a[i];
    }
    int ans = 1001, k = 0;
    ll sum = 0, ians;
    for(int i(1);i<n;i++)
    {
        sum += xuli(ans,n,k,ians);
        sapxep(ians,n);
        k++;
    }
    cout << sum;
    return 0;
}