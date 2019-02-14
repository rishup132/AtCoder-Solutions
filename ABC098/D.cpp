#include<bits/stdc++.h>

#define ll long long

using namespace std;

ll int a[300010];

int main()
{
    ll int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    ll int count = 1;
    ll int temp1,temp2,ans = 0;

    for(int i=1;i<n;i++)
    {
        temp1 = a[i] ^ a[i-1];
        temp2 = a[i] + a[i-1];

        if(temp1 == temp2)
            count++;
        else
        {
            cout << i << " " << count << endl;
            ans += count*(count+1)/2;
            count = 1;
        }
    }

    ans += count*(count+1)/2;

    cout << ans << endl;
}