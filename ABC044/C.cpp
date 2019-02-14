#include <bits/stdc++.h>

using namespace std;

int a[100];

int main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    for(int i=1;i<n;i++)
        a[i] += a[i-1];

    int count = 0;

    for(int i=1;i<=n;i++)
    {
        int temp = m*i;

        for(int j=i-1;j<n;j+=i)
        {
            int temp1 = a[j] - a[j-i-1];

            if(temp1 == temp)
                count++;
        }

    }

    cout << count << endl;
}