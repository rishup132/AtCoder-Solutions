#include <bits/stdc++.h>

using namespace std;

map <int,int> m;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    m[a]++;
    m[b]++;
    m[c]++;

    cout << m.size() << endl;
}