#include <bits/stdc++.h>

#define ll long long

using namespace std;

int a[100010],b[100010],c[100010];

int main()
{
    int n;
    ll k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
        cin >> a[i];

    /*b[0] = 0;

    for(int i=1;i<n;i++)
    {
        if(a[i] < a[b[i-1]])
            b[i] = i;
        else
            b[i] = b[i-1];
    }*/

    c[n-1] = n-1;

    for(int i=n-2;i>=0;i--)
    {
        if(a[i] > a[c[i+1]])
            c[i] = i;
        else
            c[i] = c[i+1];
    }

    /*for(int i=0;i<n;i++)
        cout << a[b[i]] << " ";
    cout << endl;

    for(int i=0;i<n;i++)
        cout << a[c[i]] << " ";
    cout << endl;*/

    ll ans = 0;
    int c1 = 0;
    //pair <int,int> p;

    for(int i=0;i<n-1;i++)
    {
        ll temp = a[c[i+1]] - a[i];

        if(ans < temp)
        {
            ans = temp;
            c1 = 1;
        }
        else if(ans == temp)
            c1++;
    }

    cout << c1 << endl;
}