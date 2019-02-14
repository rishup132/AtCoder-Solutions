#include <bits/stdc++.h>

using namespace std;

int a[100010][3];
int dp[100010][3];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<3;j++)
            cin >> a[i][j];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(j != k)
                    dp[i][j] = max(dp[i][j],dp[i-1][k]+a[i][j]);
            }
        }
    }

    cout << max(dp[n][0],max(dp[n][1],dp[n][2])) << endl;
}