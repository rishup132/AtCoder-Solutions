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
map <int,int> m;
unordered_map <int,int> um;
queue <int> bq;

int32_t main()
{
    um.reserve(1<<15);
    um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;
    cin >> s1 >> s2;

    for(int i:s1)
        a[i-'a']++;

    for(int i:s2)
        b[i-'a']++;

    multiset <int> s3,s4;

    for(int i=0;i<26;i++)
    {
        s3.insert(a[i]);
    }

    for(int i=0;i<26;i++)
    {
        s4.insert(b[i]);
    }

    if(s3 == s4)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}