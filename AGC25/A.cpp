#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[200010];

int main()
{
    int n;
    cin >> n;

    int ans = 10000000;

    for(int i=1;i<n;i++)
    {
        int temp = n-i;
        int temp1 = i;
        int sum = 0;

        while(temp)
        {
            sum += temp%10;
            temp /= 10;
        }

        while(temp1)
        {
            sum += temp1%10;
            temp1 /= 10;
        }

        if(ans > sum)
            ans = sum;
    }

    cout << ans << endl;
}