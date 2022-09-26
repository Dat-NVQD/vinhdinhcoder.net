#include<bits/stdc++.h>
using namespace std;
#define fast
#define ll long long
static ll a_res[100000];

void RES(ll res, ll &s)
{
    s = 0;
    for(ll i(1);res != 0; res = res/10)
    {
        a_res[i]=res%10;
        i++;
        s++;
    }
}

void lucky(ll &i, ll n, ll s)
{
    cout << "\ns-"<< s << "\n";
    for(ll j(s);j>=0;j--)
    {
        cout << a_res[j] <<' ';
        if(i==n)
            break;
        if(i>1 && a_res[j]==4)
        {
            a_res[j] = 7;
            for(ll k(s);k>=j+1;k--)
            {
                a_res[k] = 4;
                i++;
                if(i==n)
                    break;
            }
            j=s;
        }
        else    
            i++;
        
    }
}

int ANS(ll &ans,ll s)
{
    for(ll i(s);i>0;i--)
    {
        ans = ans*10+a_res[i];
    }
    return ans;
}

int main()
{
    // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // fast
    // #ifndef ONLINE_JUDGE
    // freopen("bai4.inp","r",stdin);
    // freopen("bai4.out","w",stdout);
    // #endif
    ll n;
    cin >> n;
    ll ans(0), res(0),s;
    for(ll i(1);i<n;)
    {
        res = 4+res*10;
        cout << res << "\n"; 
        RES(res,s);
        lucky(i,n,s);
    }
    cout<<ANS(ans,s);

    return 0;
}