#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct bn
{
    int so,id;
};
bool cmp(bn p1,bn p2)
{
    return p1.so<p2.so;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    int n,bac=1,nam=1;
    cin>>n;
    bn a[n+1];
    for(int i=1;i<=n;i++) {cin>>a[i].so;a[i].id=i;}
    for(int i(1);i<=n;i++)
        cout << a[i].id << " ";
    cout << endl;
    sort(a+1,a+n+1,cmp);
    for(int i=3;i<=n;i+=2) {
        if(a[i].id<a[i-2].id) bac++;
    }
    for(int i=4;i<=n;i+=2) {
        if(a[i].id<a[i-2].id) nam++;
    }
    cout<<bac<<"\n"<<nam;
    return 0;
}
