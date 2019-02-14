#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int dp[3010][3010][2];
int a[3010];

pair<int,int> solve(int l, int r, int cnt)
{
    if(l > r)
        return {0,0};

    if(dp[l][r][cnt] == -1)
    {
        auto temp = solve(l+1,r,cnt^1);
        dp[l+1][r][cnt] = temp.first;
        dp[l+1][r][cnt^1] = temp.second;

        temp = solve(l,r-1,cnt^1);
        dp[l][r-1][cnt] = temp.first;
        dp[l][r-1][cnt^1] = temp.second;

        if(a[l]+dp[l+1][r][cnt] > a[r]+dp[l][r-1][cnt])
            dp[l][r][cnt] = a[l]+dp[l+1][r][cnt], dp[l][r][cnt^1] = dp[l+1][r][cnt^1];
        else
            dp[l][r][cnt] = a[r]+dp[l][r-1][cnt], dp[l][r][cnt^1] = dp[l][r-1][cnt^1];
    }

    if(cnt == 0)
        return {dp[l][r][cnt],dp[l][r][cnt^1]};
    else
        return {dp[l][r][cnt^1],dp[l][r][cnt]};
}

int32_t main()
{
    int n;
    cin >> n;

    int sum = 0;

    for(int i=0;i<n;i++)
        cin >> a[i], sum += a[i];

    for(int i=0;i<3010;i++)
    {
        for(int j=0;j<3010;j++)
            dp[i][j][0] = dp[i][j][1] = -1;
    }

    auto temp = solve(0,n-1,0);

    cout << temp.first - temp.second << endl;
}