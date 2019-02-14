#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    vector <pair<int,int> > v;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;

        v.push_back(make_pair(y,x));
    }

    sort(v.begin(),v.end());

    int count = 0;
    int ed = 1;

    for(int i=0;i<m;i++)
    {
        if(v[i].second >= ed)
        {
            count++;
            ed = v[i].first;
        }
    }

    cout << count << endl;
}