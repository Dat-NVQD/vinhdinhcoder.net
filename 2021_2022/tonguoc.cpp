#include<bits/stdc++.h>
using namespace std;
#define fast
#define ll long long
static long c[1000000000001];

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
    ll a, b;
    cin >> a >> b;
    ll kq(0);
    
    for(ll i(1);i<=a;i++)
        if(a%i==0)
            c[i]+=1;
    for(ll i(1);i<=b;i++)
    {
        if(b%(3*i)==0)
            c[i]+=1;
    }
    for(ll i(1);i<=a;i++)
        if(c[i] == 2)
            kq+=i;
    
    cout << kq;
    return 0;
}