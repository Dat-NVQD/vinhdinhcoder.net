#include<bits/stdc++.h>

using namespace std;
#define fast
#define ll long long

bool snt(ll a)
{
    for(int j(2);j<=sqrt(abs(a));j++)
    {
        if(a%j==0)
            return false;
    }
    return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	fast
	#ifndef ONLINE_JUDGE
	freopen("number.inp","r",stdin);
	freopen("number.out","w",stdout);
	#endif
	ll s,n(0),a[100001];
	while(cin >> s)
	{
		a[n] = s;n++;
	}
	
	//-------------------------------------------------
	for(int i(n-2);i>=0;i--)
	{
        if(i==0)
        {
            cout << 0;
            break;
        }
		else if(snt(a[i-1]) && snt(a[i+1]))
        {
            cout << i+1;
            break;
        }
	}
	//-------------------------------------------------
	

	return 0;
}
