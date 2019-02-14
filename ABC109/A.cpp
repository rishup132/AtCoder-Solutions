#include <bits/stdc++.h>

using namespace std;

bool cmp1(string s1, string s2)
{
    if(s1.size() == 2)
    {
        if(s1[1] == s2[1])
            return s1[0] < s2[0];
        else
            return s1[1] < s2[1];
    }
    else if(s1[2] == s2[2])
        return s1[2] < s2[2];
    else
        return s1[2] < s2[2];
}

bool cmp2(string s1, string s2)
{
    if(s1.size() == 2)
    {
        if(s1[1] == s2[1])
            return s1[0] < s2[0];
        else
            return s1[1] > s2[1];
    }
    else if(s1[2] == s2[2])
        return s1[1] < s2[1];
    else
        return s1[2] > s2[2];
}

int main()
{
    int n = 8;
    string s;

    vector <string> w,b;

    while(n)
    {
        cin >> s;
        cin >> s;

        int t = 2;

        while(t < 31)
        {
            if(s[t] == '.' || s[t] == ':')
            {
                t += 4;
                continue;
            }

            string ans = "";
            char a = s[t];

            if(a != 'P' && a != 'p')
            {
                if(a >= 'a')
                    a -= 32;

                ans += a;
            }

            a = t/4 + 97;
            ans += a;
            
            a = n + 48;
            ans += a;

            if(s[t] < 97)
                w.push_back(ans);
            else
                b.push_back(ans);

            t += 4;
        }

        n--;
    }
    cin >> s;

    map <char,vector <string> > m;

    for(auto i:w)
    {
        if(i.size() == 3)
            m[i[0]].push_back(i);
        else
            m['a'].push_back(i);
    }

    for(auto &i:m)
        sort(i.second.begin(),i.second.end(),cmp1);

    string p = "KQRBNa";
    string ans = "White: ";

    for(auto i:p)
    {
        for(auto j:m[i])
            ans += (j+",");
    }

    ans.pop_back();
    cout << ans << endl;

    m.clear();

    for(auto i:b)
    {
        if(i.size() == 3)
            m[i[0]].push_back(i);
        else
            m['a'].push_back(i);
    }

    for(auto &i:m)
        sort(i.second.begin(),i.second.end(),cmp2);

    p = "KQRBNa";
    ans = "Black: ";

    for(auto i:p)
    {
        for(auto j:m[i])
            ans += (j+",");
    }

    ans.pop_back();
    cout << ans << endl;
}