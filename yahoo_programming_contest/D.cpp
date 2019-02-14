#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int n;
int a[200010];
int tree[1000010];
int tree1[1000010];

void build(int node, int start, int end)
{
    if(start == end)
        tree[node] = start;
    else
    {
        int mid = (start + end) / 2;

        build(2*node, start, mid);
        build(2*node+1, mid+1, end);

        tree[node] = a[tree[2*node]] > a[tree[2*node+1]] ? tree[2*node+1] : tree[2*node];
    }
}

int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
        return 200001;

    if(l <= start and end <= r)
        return tree[node];

    int mid = (start + end) / 2;

    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);

    int ans = a[p1] > a[p2] ? p2 : p1;

    return ans;
}

void build1(int node, int start, int end)
{
    if(start == end)
        tree1[node] = a[start];
    else
    {
        int mid = (start + end) / 2;

        build1(2*node, start, mid);
        build1(2*node+1, mid+1, end);

        tree1[node] = tree1[2*node] + tree1[2*node+1];
    }
}

int query1(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
        return 0;

    if(l <= start and end <= r)
        return tree1[node];

    int mid = (start + end) / 2;

    int p1 = query1(2*node, start, mid, l, r);
    int p2 = query1(2*node+1, mid+1, end, l, r);

    return p1+p2;
}

int solve(int l, int r, int cnt)
{
    if(l >= r)
        return 0;

    int id = query(1,0,n-1,l,r);
    cout << id << endl;

    int cnt1 = query1(1,0,n-1,l,id-1) - (id-l)*(cnt+a[id]);
    int cnt2 = query1(1,0,n-1,id+1,r) - (r-id)*(cnt+a[id]);
    cout << cnt1 << " " << cnt2 << endl;

    if(cnt1 > cnt2)
        return cnt2 + solve(l,id-1,cnt+a[id]);
    else
        return cnt1 + solve(id+1,r,cnt+a[id]);
}

int32_t main()
{
    cin >> n;

    a[200001] = 2e9;

    for(int i=0;i<n;i++)
        cin >> a[i];

    build(1,0,n-1);
    build1(1,0,n-1);

    cout << "asd\n";

    cout << solve(0,n-1,0) << endl;
}