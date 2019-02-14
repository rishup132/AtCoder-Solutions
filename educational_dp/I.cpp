#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

double dp[3010][3010];
double a[3010];

int32_t main()
{
    int n;
    cin >> n;

    dp[0][0] = 1;

    for(int i=1;i<=n;i++)
        cin >> a[i], dp[0][i] = a[i]*dp[0][i-1];

    double ans = dp[0][n];

    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=n;j++)
            dp[i][j] = dp[i-1][j-1]*(1-a[j]) + dp[i][j-1]*a[j];

        ans += dp[i][n];
    }

    cout << fixed << setprecision(10) << ans << endl;
}