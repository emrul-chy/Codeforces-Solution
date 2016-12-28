#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[105];
    int i, l, c=0;
    cin >> s;
    l = strlen(s);
    for(i=0; i<l; i++)
    {
        s[i] -= 96;
    }
    c += min((int)abs(1-s[0]+26), int(s[0]-1));
    for(i=0; i<l-1; i++)
    {
        if(s[i+1] > s[i])
        {
            c += min((int)abs(s[i+1]- s[i]), (int)abs(s[i]+26-s[i+1]));
            s[i] = min((int)abs(s[i+1]- s[i]), (int)abs(s[i]+26-s[i+1]));
        }
        else
        {
            c +=  min((int)abs(s[i+1]- s[i]),(int)abs(s[i+1]+26-s[i]));
            s[i] = (int)abs(s[i+1]+26-s[i]);
        }
    }
    cout << c << endl;
    return 0;
}
