#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

bool dp[100010];
int a[110];

int32_t main()
{
    int n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<k;i++)
    {
        if(!dp[i])
        {
            for(int j=0;j<n;j++)
            {
                if(i+a[j] <= k)
                    dp[i+a[j]] = true;
            }
        }
    }

    if(dp[k])
        cout << "First\n";
    else
        cout << "Second\n";
}