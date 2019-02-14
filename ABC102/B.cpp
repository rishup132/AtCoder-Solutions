#include <bits/stdc++.h>

using namespace std;

int a[1010];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    int ans = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ans = max(ans,abs(a[i]-a[j]));
        }
    }

    cout << ans << endl;
}