#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

int a[MAX],b[MAX];
bool vis[MAX];

vector <int> v;
vector <p> vp;
set <int> s;
set <p> sp;
map <int,int> mm;
unordered_map <int,int> um;
queue <int> bq;

int32_t main()
{
    um.reserve(1<<15);
    um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,x,y;
    cin >> n >> m >> x >> y;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }

    sort(a,a+n);
    sort(b,b+m);

    for(int i=x+1;i<=y;i++)
    {
        if(i > a[n-1] && i <= b[0])
        {
            cout << "No War\n";
            return 0;
        }
    }

    cout << "War\n";

    return 0;
}