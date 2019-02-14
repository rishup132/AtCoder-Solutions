#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[300010];

int32_t main()
{
    int l,n;
    cin >> l >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    int ans1,ans2;
    int cnt1 = 0;
    int cur,cnt2;
    ans1 = ans2 = 0;

    for(int i=0;i<n;i++)
    {
        if(a[i] > (l+1)/2)
        {
            cnt1 = i;
            break;
        }
        
        ans1 = a[i];
        cur = i;
    }

    if(cnt1)
    {
        cnt2 = n;

        while(cnt1 <= cnt2)
        {
            int t1,t2;
            t1 = abs(a[cnt1] - cur);
            t2 = abs(a[cnt2] - cur);

            if(t1 > t2)
            {
                cur = cnt1;
                cnt1++;
                ans1 += t1;
            }
            else
            {
                cur = cnt2;
                cnt2--;
                ans1 += t2;
            }
        }
    }

    cnt2 = 0;

    for(int i=n;i>=1;i--)
    {
        if(a[i] <= (l+1)/2)
        {
            cnt2 = i;
            break;
        }
        
        ans2 = l - a[i];
        cur = i;
    }

    if(cnt2)
    {
        cnt1 = 0;

        while(cnt1 <= cnt2)
        {
            int t1,t2;
            t1 = abs(a[cnt1] - cur);
            t2 = abs(a[cnt2] - cur);

            if(t1 > t2)
            {
                cur = cnt1;
                cnt1++;
                ans2 += t1;
            }
            else
            {
                cur = cnt2;
                cnt2--;
                ans2 += t2;
            }
        }
    }

    cout << max(ans1,ans2) << endl;
}