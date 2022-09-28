#include<bits/stdc++.h>

using namespace std;
/*zoomlazapzo
oza*/
void string_min(string s1, string s2)
{
    cin >> s1 >> s2;
    int ms1[256] = {0},ms2[256] = {0};
    vector<char> v;
    for(int i(0);i<s2.size();i++)
    {
        ms2[s2[i]]++;
    }
    int cnt = 0, run = 0, substr_val = INT_MAX, ans = -1;
    for(int i=0;i<s1.size();i++)
    {
        ms1[s1[i]]++;
        if(ms1[s1[i]]<=ms2[s1[i]])
        {
            cnt++;

        }
        if(cnt == s2.size())
        {

            while(ms1[s1[run]] > ms2[s1[run]] || ms2[s1[run]] == 0)
            {
                if(ms1[s1[run]] > ms2[s1[run]]) ms1[s1[run]] -= 1;
                ++run;
            }

            if(substr_val > i - run + 1)
            {
                substr_val = i - run + 1;
                ans = run;
            }

        }

    }
    cout << endl;
    if(ans == -1)
        cout << "-1";
    else
        cout << s1.substr(ans,substr_val);
    
}
int main()
{
    string s1,s2;
    string_min(s1,s2);



    return 0;
}