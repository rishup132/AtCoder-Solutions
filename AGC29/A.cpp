#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    string s;
    cin >> s;

    int cnt = 0;
    int ans = 0;

    for(char i:s)
    {
        if(i == 'B')
            cnt++;
        else
            ans += cnt;
    }

    cout << ans << endl;
}