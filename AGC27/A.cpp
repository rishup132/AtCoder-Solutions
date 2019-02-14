#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[200010];

int32_t main()
{
    int n,x;
    cin >> n >> x;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    int ans = 0;

    stack <int> s;

    for(int i=0;i<n;i++)
        s.push(a[i]);

    while(!s.empty())
    {
        int temp1 = s.top();
        int sum = temp1 + x;
        s.pop();
        int count = 1;

        while(true && !s.empty())
        {
            int temp = (2*count-2)*s.top();

            if(x <= temp)
                break;

            sum += abs(temp1 - s.top())*(count+1)*(count+1);
            temp1 = s.top();
            sum += x;
            count++;
            s.pop();

        }

        sum += temp1*(count + 1)*(count + 1);
        sum += x;
        //cout << sum << endl;
        ans += sum;
    }

    cout << ans << endl;
}