#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int p = 0;
    int x =0;

    for(int i=0;i<n;i++)
    {
        if(s[i] == 'I')
            x++;
        else
            x--;

        if(x > p)
            p = x;
    }

    cout << p << endl;
}