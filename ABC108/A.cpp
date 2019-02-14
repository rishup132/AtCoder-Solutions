#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    if(n%2 == 0)
        cout << (n/2)*(n/2) << endl;
    else
        cout << (n/2+1)*(n/2) << endl;
}