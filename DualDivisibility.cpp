#include<bits/stdc++.h>
using namespace std;
//set<long long int> divisors;

long long int FindDivisors(long long int n, long long int m)
{
    long long int cnt=0;
    for (long long int i=1; i*i <= n; i++) // O(sqrt(n))
    {
        if(n%i==0)
        {
            //divisors.insert(i);
            //divisors.insert(n/i);
            if(i % m ==0)
            {
                cnt++;
            }
            if( i != n/i && (n/i) % m ==0)
            {
                cnt++;
            }
        }
    }
    return cnt;

}


int main()
{
    long long int n,m;
    cin>>n>>m;
    cout<<FindDivisors(n,m)<<endl;
    //cout<<NumberOfDualDivisibility(m)<<endl;

    return 0;
}
