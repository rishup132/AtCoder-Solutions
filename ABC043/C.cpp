#include <bits/stdc++.h>

using namespace std;

int a[1010];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    int ans = 1000000;

    for(int i=-100;i<101;i++)
    {
        int temp = 0;

        for(int j=0;j<n;j++)
            temp += (a[j]-i)*(a[j]-i);

        if(temp < ans)
            ans = temp;
    }

    cout << ans << endl;
}