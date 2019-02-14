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

    if(m[5] == 2 && m[7] == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}