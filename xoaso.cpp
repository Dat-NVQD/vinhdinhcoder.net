#include<bits/stdc++.h>
#define fast
#define ll long long
using namespace std;

int findNumber(ll a,ll b[])
{
    if(a%3 == 2)
        return b[1]+=1;
    else if(a%3 == 1)
        return b[0]+=1;
    return b[2]+=1;
}

int findStep(ll b[])
{
    ll a = abs(b[1] - b[0]);
    if(a/3 == 1)
        return b[2]+3;
    else if(a/3 == 2)
        return b[2]+4;
    else if(b[2]>0)
        return b[2]+2;
    return b[2]+1;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.inp","r",stdin);
    freopen("output.inp","w",stdout);
    #endif
    //--------------------------------------------------
    ll x,n(0),a[100005],b[3];
    cin >> x;
    ll thex = x;
    while(thex > 0)
    {
        a[n] = thex % 10;
        thex = thex/10;
        ++n;
    }
    //--------------------------------------------------
    for(int i(0);i<3;i++)
    {
        b[i] = 0;
    }
    //--------------------------------------------------
    for(int i(0);i<n;i++)
    {
        findNumber(a[i],b);
    }
    //--------------------------------------------------
    cout << findStep(b);
    

    return 0;
}
