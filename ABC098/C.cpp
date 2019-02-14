#include<bits/stdc++.h>

using namespace std;

int a[300010],b[300010];

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i=0;i<n;i++)
    {
        a[i+1] = s[i] == 'W' ? 1 : 0;
        b[i+1] = s[i] == 'E' ? 1 : 0;
    }

    a[0] = b[0] = a[n+1] = b[n+1] = 0;

    for(int i=1;i<=n;i++)
        a[i] += a[i-1];

    for(int i=n;i>0;i--)
        b[i-1] += b[i];

    int ans = 1e9;

    for(int i=1;i<=n;i++)
    {
        int temp = a[i-1] + b[i+1];

        if(ans > temp)
            ans = temp;
    }

    cout << ans << endl;
}