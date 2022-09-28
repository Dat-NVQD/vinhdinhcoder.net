#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string> vs;
    while(ss >> temp)
    {
        vs.push_back(temp);
    }
    reverse(vs.begin(),vs.end());
    for(int i = 0;i<vs.size();i++)
        cout << vs[i] << " ";
    return 0;
}