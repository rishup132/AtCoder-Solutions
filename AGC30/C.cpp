#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[500][500];

int32_t main()
{
    int k;
    cin >> k;

    if(k == 2)
    {
        cout << "2\n1 1\n2 2\n";
        return 0;
    }

    if(k == 4)
    {
        cout << "2\n1 2\n3 4\n";
        return 0;
    }

    int n = (k+1)/2;
    int cnt = 1;
    int cnt1;

    for(int i=0;i<n;i++)
    {
        cnt1 = cnt;

        for(int j=0;j<n;j++)
            a[i][j] = cnt1++;

        cnt++;
    }

    if(k%2 == 0)
    {
        if(n%2)
            a[n/2][n/2] = cnt1;
        else
            a[n/2-1][n/2-1] = a[n/2][n/2] = cnt1;
    }

    cout << n << endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}