#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("SumExpo.Inp","r",stdin);
    freopen("SumExpo.Out","w",stdout);
    long long n;
    int toch=0,tole=0,dem=0;
    cin>>n;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            while(n%i==0) {
                dem++;
                n/=i;
            }
            if(dem%2==0) toch+=dem;
            else tole+=dem;
            dem=0;
        }
        if(n==1) break;
    }
    if(n!=1) tole++;
    cout<<toch<<"\n"<<tole;
    return 0;
}
