#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    vector <pair<int,int> > p;

    for(int i=0;i<3;i++)
    {
        int x,y;
        cin >> x >> y;
        
        p.push_back({x,y});
        p.push_back({y,x});
    }

    vector <int> v;

    for(int i=1;i<=4;i++)
        v.push_back(i);

    while(next_permutation(v.begin(),v.end()))
    {
        bool flag = true;

        for(int i=0;i<3;i++)
        {
            bool f1 = false;

            for(auto j:p)
            {
                if(j.first == v[i] && j.second == v[i+1])
                {
                    f1 = true;
                    break;
                }
            }

            if(!f1)
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}