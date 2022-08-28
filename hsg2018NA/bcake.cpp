#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast

void thapchongnguoc(ll s, double a[],double n,double b[])
{
    double max = b[1]; // 3 7 1 2 3 4 5 1 8 5 9
    if(a[s]>max)
    {
        for(;s<n;s++)
        {
            max = b[1];
            for(int j(s);j<n;j++)
            {
                if(a[j]>max)
            {
                b[1] = b[1] + a[j];
                max = a[j];
            }
            }
            
        }
        if(b[1]>b[0])
            b[0] = b[1];
        cout << b[0] << " ";
    }  
    else if(b[1]>b[0])
    {
        b[0] = b[1];
        cout << b[0];
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    fast
    #ifndef ONLINE_JUDGE
    freopen("bcake.inp","r",stdin);
    freopen("bcake.out","w",stdout);
    #endif

    double n,r,h, a[100000],b[2]; b[0] = 0;
    cin >> n;
    for(int i(0);i<n;i++)
    {
        cin >> r >> h;
        a[i]=M_PI*r*r*h;
    }
    //-------------------------------------------------------------
    for(int i(0);i<n;i++)
    {
        for(int j(i+1);j<n;j++)
        {
            b[1] = a[i];
            thapchongnguoc(j,a,n,b);
        }
        cout << "\n---------------------\n";
        
    }
    cout << fixed << setprecision(3)<< b[0];


    return 0;
}