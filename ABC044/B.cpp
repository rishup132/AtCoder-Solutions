#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    sort(s.begin(),s.end());

    if(s.size()%2 == 0)
    {
        for(int i=1;i<s.size();i+=2)
        {
            if(s[i] != s[i-1])
            {
                cout << "No" << endl;
                return 0;
            }
        }

        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

}