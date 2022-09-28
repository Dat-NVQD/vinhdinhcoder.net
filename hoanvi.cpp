#include<bits/stdc++.h>

using namespace std;
// hoan vi de tao so lon nhat be hon n

void findi(string &n)
{
    int i =n.size() - 1;
    while(i>=0 && n[i] >= n[i-1]) i--;
    int j =n.size() - 1;
    if(i == -1)
    {cout << "-1";return;}
    else
        while(n[j] >= n[i-1] || n[j] == n[j - 1]) j--;
    int temp = n[i-1];
    n[i-1] = n[j];
    n[j] = temp;
    if(n[0]=='0')
    {
        cout << "-1";
        return;
    }
    cout << i << endl;
    cout << n;
}
int main()
{
    string n;
    cin >> n;
    findi(n);
    
    return 0;
}