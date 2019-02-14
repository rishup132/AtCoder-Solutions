#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int h,w;
    cin >> h >> w;

    int cnt = 0;

    while(n--)
    {
        int x,y;
        cin >> x >> y;

        if(x >= h && y >= w)
            cnt++;
    }

    cout << cnt << endl;

}