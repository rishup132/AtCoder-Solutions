#include <bits/stdc++.h>

using namespace std;

map <int,int> m;

int main()
{
    int n,k;
    cin >> n >> k;

    if(k == 1 && n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    if(k == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    int ans = k*pow(k-1,n-1);

    cout << ans << endl;
}