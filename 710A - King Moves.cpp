#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[5];
    scanf("%s",s);
    int flag=0;
    if(s[0] == 'a' || s[0] == 'h' ) flag++;
    if(s[1] == '1' || s[1]=='8') flag++;
    if(flag==0) cout<<8<<endl;
    else if(flag==1) cout<<5<<endl;
    else cout<<3<<endl;
    return 0;
}
