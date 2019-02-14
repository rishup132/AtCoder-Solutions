#include <bits/stdc++.h>

using namespace std;

int a[110];

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int m;
    cin >> m;

    while(m--)
    {
        int x,y;
        cin >> x >> y;

        cout << sum + y - a[x-1] << endl;
    }
}