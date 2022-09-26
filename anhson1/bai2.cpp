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
    freopen("xaugon.inp","r",stdin);
    freopen("xaugon.out","w",stdout);
    #endif
    char a[251];
    char x;
    int i = 1;
    while(cin >> x)
    {
        a[i] = x;
        if(a[i] != a[i-1])
            cout << a[i];
        i++;
    }
    return 0;
}