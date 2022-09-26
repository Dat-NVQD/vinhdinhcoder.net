#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fast
static ll dem[1001];



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("sotatsau.inp","r",stdin);
    freopen("sotatsau.out","w",stdout);
    #endif
    char a[1001];
    int n;
    cin >> n;
    for(int i(1);i<=n;i++)
        cin >> a[i];
    //Find Min
    int ix = 0;
    for(int i = n;i>2;i--)
    {
        if(a[i]>a[i-1])
        {
            ix = i - 1; 
            break;
        }
    }
    sort(a+ix+1,a+n+1);
    int d = 0;
    for(int i(ix+1);i<=n;i++)
    {
        if(a[i]>a[ix])
        {
            int temp = a[i];
            a[i] = a[ix];
            a[ix] = temp;
            break;
        }
        d++;
    }
    if(d==n - ix)
        cout << 0;
    else
    {
        sort(a+ix+1,a+n+1);
        for(int i(1);i<=n;i++)
            cout << a[i];
    }
    return 0;

}