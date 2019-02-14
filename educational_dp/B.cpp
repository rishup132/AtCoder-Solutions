#include <bits/stdc++.h>

using namespace std;

int a[100010];
int dp[100010];

int32_t main()
{
    int n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
        cin >> a[i];

    dp[0] = 0;

    for(int i=1;i<n;i++)
    {
        int cnt = k;
        dp[i] = 2e9;

        for(int j=i-1;j>=0 && cnt--;j--)
            dp[i] = min(dp[i],dp[j]+abs(a[j]-a[i]));
    }

    cout << dp[n-1] << endl;
}