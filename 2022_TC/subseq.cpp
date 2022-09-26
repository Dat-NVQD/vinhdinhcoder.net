#include<bits/stdc++.h>

using namespace std;
#define fast
#define ll long long
static int a[100001],b[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("subseq.inp","r",stdin);
    freopen("subseq.out","w",stdout);
    #endif
    int n,ans(0),res(0);
    cin >> n;
    for(int i(1);i<=n;i++)
        {cin>>a[i];b[i]=a[i];}
    int max = a[n];
    for(int i(n);i>0;i--)
    {
        res = 0;
        for(int j(1);j<=i;j++)
        {
            if(a[i] % a[j] == 0)
                res++;
        }
        if(res>ans)
            ans = res;
    }
    cout << ans;

    return 0;
}