#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,cnt=0, det;
    while(scanf("%d %d %d %d", &a,&b,&c,&d) != EOF)
    {
        cnt++;

        det= (a*d) - (b*c);
        printf("Case %d:\n%d %d\n%d %d\n",cnt,d/det,(-1*b)/det,(-1*c)/det,a/det);

    }

    return 0;
}
