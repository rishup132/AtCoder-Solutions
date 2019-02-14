#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int count;
    count = 0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'p')
            count++;
    }

    cout << (int)s.size()/2 - count << endl;
}