#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[200010];
map <int,int> m;

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    int cnt = 1;
    int count = 1;
    int cnt1 = a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i] > a[i-1])
        {
            if(count == 1)
                cnt1 = a[i];
        }
        else
        {
            //cout << cnt1 << endl;
            if(cnt1 >= a[i])
            {
                cnt1 = 0;
                count++;
                cnt = a[i];

                if(cnt == cnt1+1)
                    cnt = a[i]+1, cnt1++;
            }
            else
            {
                cnt = min(cnt-1,a[i]);

                if(cnt == cnt1+1)
                    cnt = a[i]+1, cnt1++;
            }
        }
    }

    cout << count << endl;
}