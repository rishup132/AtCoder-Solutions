#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll a,b,x;
    cin >> a >> b >> x;

    ll ans = 0;

    if(a == 0)
    {
        a = 1;
        ans++;
    }

    if(x > b)
        cout << ans << endl;
    else if(x >= a)
        cout << ans + b/x << endl;
    else
        cout << ans + b/x - (a-1)/x << endl;
}