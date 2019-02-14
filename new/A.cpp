#include <bits/stdc++.h>

using namespace std;

int vis[500][500];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    string s[n+1];

    for(int i=0;i<n;i++)
        cin >> s[i];

    int ans = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j != 0 && s[i][j-1] != s[i][j])
                vis[i][j] += vis[i][j-1] + 1;

            if(i != 0 && s[i-1][j] != s[i][j])
                vis[i][j] += vis[i-1][j] + 1;
        }
    }

    cout << vis[n-1][m-1] << endl;
}