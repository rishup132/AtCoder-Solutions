#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;

    while(n)
    {
        if(n%10 == 2)
            cnt++;

        n /= 10;
    }

    cout << cnt << endl;
}