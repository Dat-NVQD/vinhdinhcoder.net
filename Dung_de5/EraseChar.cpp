#include<bits/stdc++.h>
using namespace std;
string xoakt(string a,int n,int tr)
{
    return a.substr(tr,a.size()-n);
}
bool ktra(string a)
{
    for(int i=0;i<=(a.size()-1)/2;i++)
        if(a[i]!=a[a.size()-1-i]) return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("EraseChar.Inp","r",stdin);
    freopen("EraseChar.Out","w",stdout);
    int n,k,an=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<=k;i++) {
        if(ktra(xoakt(s,k,i))==true) {cout<<xoakt(s,k,i);an=1;break;}
    }
    if(an==0) cout<<"No";
    return 0;
}
