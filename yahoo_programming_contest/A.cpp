#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    int n,k;
    cin >> n >> k;

    int cnt = (n+1)/2;

    if(cnt < k)
        cout << "NO";
    else
        cout << "YES";
}