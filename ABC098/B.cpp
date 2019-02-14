#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0,count;

    for(int i=1;i<n;i++)
    {
        map <char,int> m;

        for(int j=0;j<i;j++)
            m[s[j]]++;

        count = 0;

        for(int j=i;j<n;j++)
        {
            if(m[s[j]] != 0)
            {
                count++;
                m[s[j]] = 0;
            }
        }

        if(count > ans)
            ans = count;
    }

    cout << ans << endl;
}