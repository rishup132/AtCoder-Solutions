#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = min(10,(int)s.size());
    int m = s.size();

    ll temp,temp1,temp2;
    ll ans = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m-i;j++)
        {
            temp = 0;

            for(int k=j;k<=j+i;k++)
                temp = temp*10 + (s[k]-'0');

            temp1 = max(1,(int)pow(2,(j-1)));
            temp2 = max(1,(int)pow(2,(n-j-i-2)));

            temp = temp1*temp2*temp;
            //cout << temp << endl;
            ans += temp;
        }
    }

    cout << ans << endl;
}