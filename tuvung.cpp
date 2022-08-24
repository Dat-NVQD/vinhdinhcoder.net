#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fast
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	fast
	#ifndef ONLINE_JUDGE
	freopen("input.inp","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	string s;
	cin >> s;
	int n=s.size();
	ll nguyenam[n],phuam[n],mna(0),mpa(0);
	//--------------SAVE a[] b[]-------------------
	for(int i(0);i<n;i++)
	{
		nguyenam[i] = 0;
		phuam[i] = 0;
	}
	for(int i(1);i<n;i++)
	{
		if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
			{
				nguyenam[i]=mna+1;
				mna=nguyenam[i];
				phuam[i] = mpa;
			}
		else
			{
				phuam[i]=mpa+1;
				mpa=phuam[i];
				nguyenam[i] = mna;
			}
	}
	//--------------FIND a[] b[]-------------------
	ll tong(0);
	if(s[0] == 'a' or s[0] == 'e' or s[0] == 'i' or s[0] == 'o' or s[0] == 'u')
		tong = tong + mpa;
	else
		tong = tong + mna;

	
	for(int i(1);i<n;i++)
	{
		if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
			tong = tong + mpa - phuam[i];
		else
			tong = tong + mna -nguyenam[i];
	}
	cout << tong;
	

	return 0;
}