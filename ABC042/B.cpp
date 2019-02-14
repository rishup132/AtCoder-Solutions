#include <bits/stdc++.h>

using namespace std;

map <int,int> m;

int main()
{
    int n,l;
    cin >> n >> l;

    vector <string> v;
    string s;

    for(int i=0;i<n;i++)
    {
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
        cout << v[i];
    cout << endl;
}