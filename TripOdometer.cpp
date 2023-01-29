#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> distance;
    set<int> possibleSum;
    int n,val,totalSum=0;
    cin>>n;
    while(n--)
    {
        cin>>val;
        totalSum += val;
        distance.push_back(val);
    }
    for(int i=0; i<distance.size(); i++)
    {
        possibleSum.insert(totalSum-distance[i]);
    }
    int len= possibleSum.size();
    cout<<possibleSum.size()<<endl;
    for(auto itr: possibleSum)
    {
        cout<<itr<<' ';
    }

    cout<<endl;


    return 0;
}
