#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    int k,a,b;
    cin >> k >> a >> b;

    if(b-a <= 1 || k+1 <= a)
        cout << k+1 << endl;
    else
    {
        k -= (a-1);
        int ans = a + (b-a)*(k/2) + k%2;
        cout << ans << endl;
    }
}