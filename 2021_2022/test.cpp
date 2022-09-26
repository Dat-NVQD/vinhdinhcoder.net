#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll sum(0);
    ll a,b;
    cin >> a >>b;
    set<int> s;
    for(ll i(1);i<=a;i++)
        if(a % i == 0)
            s.insert(i);

    for(set<int>::iterator it = s.begin();it!=s.end();it++)
    {
        ll x = *it;
        if(b%(3*x) == 0)
            sum = sum+x;
    }
    cout << sum;
    return 0;
}