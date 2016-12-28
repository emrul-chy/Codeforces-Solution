#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, m, n, ans[1000], a[1000][105], mx, ind;
    cin >> n >> m;
    memset(ans, 0, sizeof(ans));
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }
    int as = 0, ansind=1;
    for(i=1; i<=m; i++)
    {
        mx = 0, ind = 1;
        for(j=1; j<=n; j++)
        {
            if(a[i][j] > mx )
            {
                mx = a[i][j];
                ind = j;
            }
        }
        ans[ind]++;
    }
    for(i=1; i<=n; i++)
    {

        if(ans[i] > as)
        {
            as = ans[i];
            ansind = i;
        }
    }
    cout << ansind << "\n";
    return 0;
}
