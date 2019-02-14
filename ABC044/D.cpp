#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll solve(ll b, ll n)
{
    if(n < b)
        return n;
    else
        return solve(b,n/b) + n%b;
}

int main()
{
    ll n,s;
    cin >> n >> s;

    if(s == 1)
}