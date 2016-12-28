#include<bits/stdc++.h>

using namespace std;

int main(){

    int ar[100005][2],s,ans=0, dif, n, i, s1=0, s2=0;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> ar[i][0] >> ar[i][1];
        s1 += ar[i][0];
        s2 += ar[i][1];
    }
    dif = abs(s1 - s2);
    int mx = dif;
    for(i=0; i<n; i++)
    {
        int a = s1, b = s2;
        a -= ar[i][0];
        a += ar[i][1];
        b -= ar[i][1];
        b += ar[i][0];
        s = abs(a-b);
        if(s > dif)
        {
            if(s > mx)
            {
                mx = s;
                ans = i + 1;
            }
        }
    }
    cout << ans <<endl;
    return 0;
}
