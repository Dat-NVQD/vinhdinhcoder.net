#include<bits/stdc++.h>

using namespace std;
#define fast
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("kytu.inp","r",stdin);
    freopen("kytu.out","w",stdout);
    #endif

    map<char, int> c;
    char x;
    while(cin >> x)
    {
        char k = tolower(x);
        ll n;
        c[k]++;
    }
    for(map<char, int>::iterator it = c.begin();it != c.end();it++)
    {
        cout << (*it).first << ":" <<(*it).second<<"\n";
    }

    return 0;
}