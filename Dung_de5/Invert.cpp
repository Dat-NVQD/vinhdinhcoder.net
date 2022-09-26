#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("Invert.Inp","r",stdin);
    freopen("Invert.Out","w",stdout);
    int n,m,x,y,z,dem=0;
    cin>>n>>m;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) {
        cin>>x>>y;
        for(x;x<=y;x++)
            for(z=x+1;z<=y;z++)
               if(a[x]>a[z]) dem++;
        cout<<dem<<"\n";
        dem=0;
    }
    return 0;
}
