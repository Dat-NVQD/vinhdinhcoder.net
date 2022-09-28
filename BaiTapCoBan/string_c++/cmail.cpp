#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> m;
    for(int i(1);i<=n;i++)
    {
        string s;
        string check = "";
        getline(cin, s);
        for(int i(0);i<s.size();i++) s[i] = tolower(s[i]);
        vector<string> v;
        stringstream ss(s);
        string temp;
        while(ss >> temp) v.push_back(temp);
        check = check + v[v.size()-1];
        for(int j(0);j<v.size()-1;j++) check += v[j][0];
        if(m[check] == 0) cout << check << "@gmail.com" << "\n";
        else cout << check << m[check]+1<<"@gmail.com" << "\n";
        m[check]++;
    }
    return 0;
}