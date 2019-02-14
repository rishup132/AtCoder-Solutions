#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll a[100010],b[100010];

int main()
{
    int n;
    ll x;
    cin >> n >> x;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    ll count = 0;

    for(int i=1;i<n;i++)
    {
        ll temp = a[i] + a[i-1];

        if(temp <= x)
            continue;
        else
        {
            temp -= x;
            count += temp;
            a[i] = max((ll)0,a[i]-temp);
        }
    }

    /*ll count1 = 0;

    for(int i=n-2;i>=0;i--)
    {
        ll temp = b[i] + b[i+1];

        if(temp <= x)
            continue;
        else
        {
            temp -= x;
            count1 += temp;
            b[i] = min((ll)0,b[i]-temp);
        }
    }

    cout << min(count,count1) << endl;*/

    cout << count << endl;
}