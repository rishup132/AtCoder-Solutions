#include <bits/stdc++.h>

#define int long long

using namespace std;

int dp[100010];
bool vis[100010];
vector <int> v[100010];

void dfs(int x)
{
    vis[x] = true;
    dp[x] = 0;

    for(int i:v[x])
    {
        if(!vis[i])
            dfs(i);

        dp[x] = max(dp[x],dp[i]+1);
    }
}

int32_t main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;

        v[x].push_back(y);
    }

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
            dfs(i);
    }

    int ans = 0;

    for(int i=1;i<=n;i++)
        ans = max(ans,dp[i]);

    cout << ans << endl;
}