#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int n,p;
    cin >> n >> p;

    if(n == 1)
    {
        cout << p << endl;
        return 0;
    }

    int ans = 1;

    for(int i=2;i*i<=p;i++)
    {
        int cnt = 0;
        int t = p;

        while(t%i == 0)
            t /= i, cnt++;

        cnt /= n;

        if(cnt)
            ans = i;
    }

    cout << ans << endl;
}