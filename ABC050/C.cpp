#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll a[100010],b[100010];

ll power(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;

        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }

    bool flag = false;

    if(n%2 == 0)
    {
        for(int i=1;i<n;i+=2)
        {
            if(b[i] != 2)
                flag = true;
        }

        if(flag)
            cout << 0 << endl;
        else
            cout << power(2,n/2,mod)%mod << endl;
    }
    else
    {
        if(b[0] != 1)
            flag = true;

        for(int i=2;i<n;i+=2)
        {
            if(b[i] != 2)
                flag = true;
        }

        if(flag)
            cout << 0 << endl;
        else
            cout << power(2,n/2,mod)%mod << endl;
    }
}