#include<bits/stdc++.h>

using namespace std;
void sumval_int_in_string(string s)
{
    long long ans = 0;
    long long sum = 0;
    for(int i(0);i<s.size();i++)
    {
        if(isdigit(s[i]))
            sum = sum*10 + (s[i] - '0');
        else
        {
            ans += sum;
            sum = 0;
        }
    }
    cout << ans+sum;
}
int main()
{
    string s;
    cin >> s;
    sumval_int_in_string(s);
    return 0;
}