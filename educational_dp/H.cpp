#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int dp[1010][1010];

int32_t main()
{
    int h,w;
    cin >> h >> w;

    string s[h];

    for(int i=0;i<h;i++)
        cin >> s[i];

    dp[0][0] = 1;

    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(j && s[i][j-1] == '.')
                dp[i][j] += dp[i][j-1];

            if(i && s[i-1][j] == '.')
                dp[i][j] += dp[i-1][j];

            dp[i][j] %= mod;
        }
    }

    cout << dp[h-1][w-1] << endl;
}