#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    #endif
    int n;
    map<int,int> m;
    cin >> n;
    int x;
    for(int i(0);i<n;i++)
    {
        cin >> x;
        if(x > 0) m[x]++;
    }
    for(map<int,int>::iterator i = m.begin();i!=m.end();i++)
    {
        if((*i).second == 1)
        {
            cout << (*i).first;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}
