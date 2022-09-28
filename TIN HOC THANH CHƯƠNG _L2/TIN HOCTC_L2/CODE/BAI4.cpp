#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000002], a1[1000002], a2[1000002];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    a2[0]=0;
    for (int i=1;i<=n;i++) a2[i]=a2[i-1]+(a[i]/2);
    a1[n+1]=0;
    for (int i=n;i>=1;i--) a1[i]=a1[i+1]+(a[i]%2);
    int minn = n+1;
    for (int i=1;i<=n+1;i++) minn=min(minn,a2[i-1]+a1[i]);
    cout<<minn;
    return 0;
}
