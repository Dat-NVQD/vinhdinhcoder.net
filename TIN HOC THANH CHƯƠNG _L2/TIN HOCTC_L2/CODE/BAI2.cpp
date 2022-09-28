#include<bits/stdc++.h>
using namespace std;
int main()
{
freopen("BAI2.INP", "r", stdin);
freopen("BAI2.OUT", "w", stdout);
int l=0, n,dem=0;
string s;
cin>>n;
cin>>s;
for(int i=0;i<n;i++)
  {
      if (s[i]=='D') l--;
      if (s[i]=='U') l++;
      if ((l==0)&&(s[i]=='U')) dem=dem+1;
  }
  cout<<dem;
  return 0;

}
