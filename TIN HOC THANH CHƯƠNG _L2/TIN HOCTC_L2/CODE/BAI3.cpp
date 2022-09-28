#include<bits/stdc++.h>
using namespace std;
int main()
{
freopen("BAI3.INP", "r", stdin);
freopen("BAI3.OUT", "w", stdout);
   long long n,i,d=0;
   int k;
    cin>>n;
    k=sqrt(n);
    bool check[k + 1];
  for (int i = 2; i <= k; i++)
    check[i] = true;
  for (int i = 2; i <= k; i++)
  {
    if (check[i] == true)
    {
      for (int j = 2 * i; j <= k; j += i)
      {
        check[j] = false;
      }
    }
  }
    for(i=2;i<=sqrt(n);i++) if (check[i]==true) d++;
     cout<<d;
    return 0;
}
