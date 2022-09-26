#include<bits/stdc++.h>

using namespace std;
// 4 15
void findmax(int s, int k)
{
    vector<int> v;
    for(int i(1);i<=k;i++)
    {
        if(s>9)
        {
            v.push_back(9);
            s -= 9;
        }
        else
        {
            v.push_back(s);
            s -= s;
        }
    }
    for(int i = 0;i<k;i++)
        cout << v[i];
}

void findmin(int s, int k)
{
    s -= 1;
    int min[k];
    for(int i(1);i<=k;i++)
    {
        if(s>9)
        {
            min[k-i] = 9;
            s -= 9;
        }
        else
        {
            min[k-i] = s;
            s -= s;
        }
    }
    min[0] += 1;
    for(int i = 0;i<k;i++)
        cout << min[i];
}
int main()
{
    int k,s;cin>>k>>s;
    if(s>9*k || (s==0 && k>1))
    {cout <<"-1 -1";return 0;}
    findmax(s,k);
    cout << " ";
    findmin(s,k);
    
    return 0;
}