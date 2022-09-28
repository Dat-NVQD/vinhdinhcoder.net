#include<bits/stdc++.h>


using namespace std;

#define ll long long
static ll gt[21];

void giaithua()
{
    gt[0] = 1;
    for(int i = 1;i<=20;i++)
    {
        gt[i] = gt[i-1] * i;
    }
}
ll solve(int n, int r, int g, int b)
{
    cin >> n >> r >> g >> b;
    ll ans = 0;
    for(int R = n;R>=r;R--)
    {
        for(int G = n-R; G >= g;G--)
        {
            int B = n - R - G;
            if(B>=b)
                ans += gt[n] / (gt[R]*gt[B]*gt[G]);
        }
    }
    return ans;

}
int main()
{
    int T; cin >> T;
    int n, r, g ,b;
    giaithua();
    for(int i(1);i<=T;i++)
    {
        cout << solve(n,r,g,b);
    }
    return 0;
}