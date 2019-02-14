#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll a[200010];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        a[i] -= (i+1);
    }

    ll ans = 0;

    for(int i=0;i<n;i++)
        ans += abs(a[i]);

    ll l,h;
    l = 0;
    h = 1000000000;

    while(l<h)
    {
        ll mid = (l+h)/2;

        ll temp1 = 0,temp2 = 0;

        for(int i=0;i<n;i++)
            temp1 += abs(a[i]-mid);

        for(int i=0;i<n;i++)
            temp2 += abs(a[i]-mid-1);

        //cout << l << " " << h << endl;
        //cout << mid << " " << temp1 << " " << temp2 << endl;

        if(temp1 <= temp2)
        {
            h = mid;
        }
        else
        {
            l = mid+1;
        }
    }

    ll ans1 = 0;

    for(int i=0;i<n;i++)
        ans1 += abs(a[i]-l);

    l = 0;
    h = 1000000000;

    while(l<h)
    {
        ll mid = (l+h)/2;

        ll temp1 = 0,temp2 = 0;

        for(int i=0;i<n;i++)
            temp1 += abs(a[i]+mid);

        for(int i=0;i<n;i++)
            temp2 += abs(a[i]+mid+1);

        //cout << l << " " << h << endl;
        //cout << mid << " " << temp1 << " " << temp2 << endl;

        if(temp1 <= temp2)
        {
            h = mid;
        }
        else
        {
            l = mid+1;
        }
    }

    ll ans2 = 0;

    for(int i=0;i<n;i++)
        ans2 += abs(a[i]+l);

    cout << min(ans1,ans2) << endl;
}