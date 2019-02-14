#include <bits/stdc++.h>

#define int long long

using namespace std;

int dp[3010][3010];

int32_t main()
{
    string s1,s2;
    int n,m;
    cin >> s1 >> s2;
    n = s1.size();
    m = s2.size();

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }

    string ans;

    while(dp[n][m] != 0)
    {
        if(s1[n-1] == s2[m-1])
        {
            ans += s1[n-1];
            n--;
            m--;
        }
        else if(dp[n-1][m] == dp[n][m])
            n--;
        else
            m--;
    }

    reverse(ans.begin(),ans.end());

    cout << ans << endl;
}