#include <bits/stdc++.h>
using namespace std;
#define MX 300005
int main()
{
    long long int t, n, j, i, c;
    char a[MX];
    cin>>n>>t;
    c = 0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i] == '#')
        {
            c++;
        }
        if(c >= t)
        {
            printf("NO\n");
            return 0;
        }
        if(a[i] == '.')
        {
            c = 0;
        }
    }

    printf("YES\n");
    return 0;
}
