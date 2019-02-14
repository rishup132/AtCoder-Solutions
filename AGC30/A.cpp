#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int a,b,c;
    cin >> a >> b >> c;

    cout << b + min(c,a+b+1) << endl;
}