#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int t, n, i, c=0;
    cin>>t>>n;
    for(i=1; i<=(t*n); i++) {
        cin>>ch;
        if(ch == 'B' || ch == 'W' || ch == 'G') {
            c++;
        }
    }
    if(c == (t*n)) {
        cout<<"#Black&White\n";
    }
    else {
        cout<<"#Color\n";
    }
    return 0;
}
