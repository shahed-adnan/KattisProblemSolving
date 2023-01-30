#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r,pi,cases,n,area,zusatz;
    pi=3.141592653589793;
    cin>>cases;
    while(cases--)
    {
        cin>>r>>n;
        area=0;
        zusatz=0;
        for(int i=1; i<=n;i++)
        {
            if(i==1)
            {
                zusatz = (1/(pow(2,i-1)*pow(2,i-1)));
            }
            else if(i==2)
            {
                zusatz = (1/(pow(2,i-1)*pow(2,i-1)))*4;
            }
            else
            {
                zusatz = 4 * pow(3,i-2) * (1/(pow(2,i-1)*pow(2,i-1)));
            }
            area += pi*r*r*zusatz;
        }
        std::cout << std::fixed << std::setprecision(6) << area<<endl;
    }

    return 0;
}
