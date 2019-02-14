#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,c;
    cin >> a >> b >> c;

    int i,j,k;
    i = j = k = 0;

    char s = 'a';

    while(true)
    {
        if(s == 'a')
        {
            if(i == a.size())
            {
                cout << 'A';
                return 0;
            }

            s = a[i++];
        }
        else if(s == 'b')
        {
            if(j == b.size())
            {
                cout << 'B';
                return 0;
            }

            s = b[j++];
        }
        else if(s == 'c')
        {
            if(k == c.size())
            {
                cout << 'C';
                return 0;
            }

            s = c[k++];
        }
    }
}