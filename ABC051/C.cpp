#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int n = c-a;
    int m = d-b;

    for(int i=0;i<n;i++)
        cout << 'R';
    
    for(int i=0;i<m;i++)
        cout << 'U';

    for(int i=0;i<n;i++)
        cout << 'L';

    for(int i=0;i<m;i++)
        cout << 'D';

    cout << 'D';
    
    for(int i=0;i<=n;i++)
        cout << 'R';
    
    for(int i=0;i<=m;i++)
        cout << 'U';

    cout << "LU";

    for(int i=0;i<=n;i++)
        cout << 'L';

    for(int i=0;i<=m;i++)
        cout << 'D';
    
    cout << 'R';
}