#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int t1,t2;
    t1 = c-a;
    t2 = d-b;

    cout << c-t2 << " " << d+t1 << " " << a-t2 << " " << b+t1 << endl;
}