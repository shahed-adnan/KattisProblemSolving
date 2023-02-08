#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,val;
    vector<long long> vec;
    cin>>n;
    while(n--)
    {
        cin>>val;
        vec.push_back(val);
    }
    for(int i= vec.size()-1;i>=0;i--)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}

