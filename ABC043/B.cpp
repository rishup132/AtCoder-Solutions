#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1;
    cin >> s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'B')
        {
            if(!s1.empty())
                s1.pop_back();
        }
        else
            s1 += s[i];
    }

    cout << s1 << endl;
}