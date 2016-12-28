#include <bits/stdc++.h>
using namespace std;
#define MX 100005
int main()
{
    long long int t, ans=-1, j, i, c, a[MX];
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a[i];
    }
    sort(a, a+i);
    c = 0;
    for(j=0; j<t; j++)
    {
        if(a[j] % a[0] == 0)
        {
            c++;
        }
    }
    if(c == t)
    {
        ans = a[0];
    }
    printf("%d\n", ans);
    return 0;
}
