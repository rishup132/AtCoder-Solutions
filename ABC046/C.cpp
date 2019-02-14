#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;

    ll a,b,x,y;
    a = b = 0;

    while(n--)
    {
        cin >> x >> y;

        ll l = 1;
        ll h = (ll)10e17/max(x,y);

        //cout << l << " " << h << endl;

        while(l<h)
        {
            ll mid = (l+h)/2;

            ll temp1 = mid*x;
            ll temp2 = mid*y;

            if(temp1 >= a && temp2 >= b)
                h = mid;
            else
                l = mid+1;
        }

        a = x*l;
        b = y*l;

        //cout << a << b << endl;
    }

    cout << a+b << endl;
}