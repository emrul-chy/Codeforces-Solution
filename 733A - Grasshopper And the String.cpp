

#include<bits/stdc++.h>

using namespace std;

int main(){

    char s[105];
    int i, t, l, mx=0, c=1, flg=0, p=0;
    gets(s);
    l = strlen(s);
    for(i=0; i<l; i++)
    {
        if((s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y'))
        {
            c = 1;
        }
        else
        {
            c++;
        }
        if(c > mx)
            {
                mx = c;
            }
    }
    cout << mx << endl;
    return 0;
}
