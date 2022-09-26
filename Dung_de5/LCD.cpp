#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("LCD.Inp","r",stdin);
    freopen("LCD.Out","w",stdout);
    int n,m,an=1,hieumx=1,tong=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++) {
        if(a[i]>a[i-1]) {
            if(a[i]-a[i-1]>hieumx) {an=i;hieumx=a[i]-a[i-1];}
        }
        else if(m-a[i-1]+a[i]>hieumx) {an=i;hieumx=m-a[i-1]+a[i];}
        }
    for(int i=1;i<n;i++) {
        if(i==an) tong+=1;
        else if(a[i]>a[i-1]) tong +=a[i]-a[i-1];
        else tong+=m-a[i-1]+a[i];
    }
    cout<<tong;
    return 0;
}
