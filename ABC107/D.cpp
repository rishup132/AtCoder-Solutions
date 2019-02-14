#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[100010],n;

int solve(int m) 
{
    vector<int> s(2 * n + 1);
    
    int sum = n;
    int result = 0;
    s[sum] = 1;
    int add = 1;

    for(int i=1;i<=n;i++)
    {
        if (a[i] < m)
            add -= s[sum], sum--;
        else
            sum++, add += s[sum];
            
        result += add;
        s[sum]++;
        add++;
    }
    return result;
}

int32_t main()
{
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    int total = n*(n+1)/2;
    total = total/2 + 1;
    total = n*(n+1)/2-total;

    int l = *min_element(a+1,a+n+1);
    int h = *max_element(a+1,a+n+1);

    if(l == h)
    {
        cout << l << endl;
        return 0;
    }

    //cout << total << endl;

    int ans = INT_MIN;

    while(l <= h)
    {
        int mid = (l+h)/2;

        int temp = solve(mid);

        //cout << mid << " " << temp << endl;

        if(temp < total)
            h = mid-1;
        else
        {
            l = mid+1;

            ans = max(ans,mid);
        }
    }

    cout << ans << endl;
}