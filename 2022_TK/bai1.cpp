#include<bits/stdc++.h>

using namespace std;
#define fast
#define ll long long

void dowork(string s, ll &dem)
{
    ll check = 0;
    for(ll i(0);i<s.size();i++)
    {
        if(s[i] > 47 && s[i]<58)
        {
            cout << s[i];
            check++;
        }
    }
    if(check > 0)
    {   
        cout << "\n";
        dem++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    #endif
    string s;
    ll x(0);
    while(cin>>s)
    {
        dowork(s,x);
    }
    if(x==0)
    cout << "No";
    return 0;
}