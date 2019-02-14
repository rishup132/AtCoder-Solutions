#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w,h,n;
    cin >> w >> h >> n;

    int p,q;
    p = q = 0;
    int x,y,a;

    for(int i=0;i<n;i++)
    {
        cin >> x >> y >> a;

        if(a == 1 && p < x)
            p = x;
        else if(a == 2 && w > x)
            w = x;
        else if(a == 3 && q < y)
            q = y;
        else if(a == 4 && h > y)
            h = y;
    }

    if(p >= w || q >= h)
        cout << 0 << endl;
    else
        cout << (w-p)*(h-q) << endl;
}