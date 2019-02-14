#include <bits/stdc++.h>

using namespace std;

set <int> s;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        if(x%2)
            cnt = 1;
    }

    if(cnt)
        cout << "first\n";
    else
        cout << "second\n";
}