#include <bits/stdc++.h>

using namespace std;

map <int,int> m;

int main()
{
    int n,k,x;
    cin >> n >> k;

    for(int i=0;i<k;i++)
    {
        cin >> x;
        m[x]++;
    }

    while(true)
    {
        int temp = n;
        bool flag = true;

        while(temp)
        {
            if(m[temp%10] == 1)
            {
                flag = false;
                break;
            }

            temp /= 10;
        }

        if(flag)
            break;

        n++;
    }

    cout << n << endl;
}