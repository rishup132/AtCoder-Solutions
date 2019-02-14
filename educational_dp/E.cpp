#include <bits/stdc++.h>

#define int long long

using namespace std;

int dp[100010][110];
int a[110][2];

int32_t main()
{
    int n,w;
    cin >> n >> w;

    for(int i=1;i<=n;i++)
        cin >> a[i][0] >> a[i][1];

    int ans = 0;

    for(int i=1;i<=100000;i++)
    {
        for(int j=0;j<=n;j++)
            dp[i][j] = 2000000000;
    }

    for(int i=1;i<=100000;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j] = dp[i][j-1];

            if(a[j][1] <= i)
                dp[i][j] = min(dp[i][j],dp[i-a[j][1]][j-1] + a[j][0]);
            
            if(dp[i][j] <= w)
                ans = max(i,ans);
        }
    }

    // for(int i=1;i<=10;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //         cout << dp[i][j] << " ";
    //     cout << endl;
    // }

    cout << ans << endl;
}