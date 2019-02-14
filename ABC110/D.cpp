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
map <int,int> om;
unordered_map <int,int> um;
queue <int> bq;

int32_t main()
{
    um.reserve(1<<15);
    um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    if(m == 1 || n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    multiset <int> ms;

    for (int i = 2; i <= sqrt(m); i++)
    { 
        while (m%i == 0) 
        { 
            ms.insert(i);
            m = m/i; 
        } 
    } 

    if(m != 1)
        ms.insert(m);

    int ans = 1;
    int temp = n;
    int pr = -1;

    for(auto i:ms)
    {
        if(i != pr)
        {
            pr = i;
            temp = n;
        }

        ans = (ans%mod * temp%mod)%mod;
        temp--;
    }

    cout << ans << endl;

    return 0;
}