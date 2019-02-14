#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[100010];

int32_t main()
{
    int n,k;
    cin >> n >> k;

    memset(a,0,100010*sizeof(a[0]));

    for(int i=1;i<=n;i++)
        a[i%k]++;

    int ans = a[0]*a[0]*a[0];

    if(k%2 == 0)
        ans += a[k/2]*a[k/2]*a[k/2];

    cout << ans << endl;
}