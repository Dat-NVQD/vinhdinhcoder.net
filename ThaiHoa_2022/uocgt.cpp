#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fast
bool snt(int p)
{
    for(int i = 2;i<=sqrt(p);i++)
        if(p%i==0)
            return false;
    return true;
}

int xuli(int p,int n)
{
    int res(0);
    for(int i(2);i<=n;i++)
    {
        int thei = i;
        while(thei%p==0)
        {
            res++;
            thei/=p;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("uocgt.inp","r",stdin);
    freopen("uocgt.out","w",stdout);
    #endif
    int n;
    cin >> n;
    ll ans = 1;
    for(int i(2);i<=n;i++)
    {
        if(snt(i))
            ans = ans*(xuli(i,n)+1);
    }
    cout << ans;
    return 0;
}