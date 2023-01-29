#include<bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    int len= text.length();
    int cnt=0;
    for(int i=0; i<len; i++)
    {
        if(text[i]=='A' || text[i] == 'a')
            cnt++;
        else if(text[i]=='E' || text[i] == 'e')
            cnt++;
        else if(text[i]=='I' || text[i] == 'i')
            cnt++;
        else if(text[i]=='O' || text[i] == 'o')
            cnt++;
        else if (text[i]=='U' || text[i] == 'u')
            cnt++;
        else
            continue;
    }
    cout<<cnt<<endl;
    return 0;
}

