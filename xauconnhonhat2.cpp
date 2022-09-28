#include<bits/stdc++.h>

using namespace std;
//aabcbcdbca aaa
void MIN_STRING(string s)
{
    cin >> s;
    map<char,int> m;
    for(int i(0);i<s.size();i++)
        m[s[i]]++;
    //tim cua so nho nhat chua tat ca cac ki tu trong map
    int as[256] = {0};
    int cnt = 0, run = 0, long_string = INT_MAX, ans;
    for(int i(0);i<s.size();i++)
    {
        as[s[i]]++;
        if(as[s[i]]==1) cnt++;
        if(cnt == m.size())
        {
            while(as[s[run]] > 1)
            {
                as[s[run]]--;
                run++;
            }
            if(long_string > i - run + 1)
            {
                long_string = i - run + 1;
            }
        }
        
    }
    cout << long_string;
}

int main()
{
    string s;
    MIN_STRING(s);
    return 0;
}