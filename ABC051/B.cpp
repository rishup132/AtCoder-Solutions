#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s;
    cin >> n >> s;

    int count = 0;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            int temp = s-i-j;

            if(temp >= 0 && temp <= n)
                count++;
        }
    }

    cout << count << endl;
}