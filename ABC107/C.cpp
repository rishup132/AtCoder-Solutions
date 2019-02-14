#include <bits/stdc++.h>

#define int long long

using namespace std;

string s[10010];

int a[100010];
int dp1[100010],dp2[100010];

int32_t main()
{
    int n,k;
    cin >> n >> k;

    int mi,mx;
    mi = INT_MAX;
    mx = INT_MIN;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];

        if(a[i] == 0)
        {
            k--;
            i--;
            n--;
        }

        //mi = min(mi,a[i]);
        //mx = max(mx,a[i]);
    }

    /*if(mi >= 0)
    {
        cout << a[k-1] << endl;
        return 0;
    }
    else if(mx <= 0)
    {
        cout << a[n-k] << endl;
        return 0;
    }*/

    for(int i=0;i<100010;i++)
        dp1[i] = dp2[i] = 1000000007;

    dp1[0] = dp2[0] = 0;

    int st = upper_bound(a,a+n,0) - a;

    for(int i=1;i<=k && st<n;i++)
    {
        dp1[i] = a[st];
        st++;
    }

    st = upper_bound(a,a+n,0) - a;

    for(int i=1;i<=k && st>0;i++)
    {
        st--;
        dp2[i] = abs(a[st]);
    }

    /*for(int i=0;i<=k;i++)
        cout << dp1[i] << " ";
    cout << endl;
    
    for(int i=0;i<=k;i++)
        cout << dp2[i] << " ";
    cout << endl;*/

    int ans = INT_MAX;

    for(int i=0;i<=k;i++)
        ans = min(ans,min(dp1[i],dp2[k-i])+dp1[i]+dp2[k-i]);

    cout << ans << endl;
}