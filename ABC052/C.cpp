#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

bool prime[1010];
ll cnt[1010];

int main()
{
    int n;
    cin >> n;

    memset(prime,true,1010*sizeof(prime[0]));

    for(int i=2;i<1010;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<1010;j+=i)
                prime[j] = false;
        }
    }

    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=i;j++)
        {
            int temp = i;

            while(prime[j] && temp%j == 0)
            {
                cnt[j]++;
                temp /= j;
            }
        }
    }

    ll ans = 1;

    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            cnt[i]++;
            ans = (ans%mod * cnt[i]%mod)%mod;
        }
    }

    cout << ans << endl;
}