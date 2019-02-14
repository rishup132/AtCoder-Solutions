#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll a[100010];

int main()
{
    int n;
    ll a,b;
    cin >> n >> a >> b;

    for(int i=0;i<n;i++)
        cin >> a[i];

    ll ans = 0;

    for(int i=1;i<n;i++)
    {
        ll temp = a[i] - a[i-1];

        if(temp*a < b)
            ans += temp*a;
        else
            ans += b;
    }

    cout << ans << endl;
}