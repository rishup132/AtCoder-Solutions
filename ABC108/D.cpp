#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int d,k,n;
        cin >> d >> k >> n;

        int a[100010];

        int ans = 0;

        for(int i=0;i<n;i++)
            cin >> a[i];

        sort(a,a+n);

        /*int t1 = a[0] - 1;
        int t2 = d - a[n-1];

        t1 = min(t1,t2);*/

        for(int i=1;i<n;i++)
            ans += (a[i] - a[i-1] - 1)/k;

        ans += (d-a[n-1]-1)/k;

        cout << ans+n+1 << endl;
    }
}