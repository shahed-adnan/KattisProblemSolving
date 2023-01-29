#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,n,sum, cnt,val;
    double avg;
    vector<int> numbers;
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        sum=0;
        cnt=0;
        for(int i=0; i<n;i++)
        {
            cin>>val;
            sum+=val;
            numbers.push_back(val);
        }

        avg = sum/n;

        for(auto & element:numbers)
        {

            if(element > avg)
            {
                cnt++;
            }
        }
        std::cout << std::fixed << std::setprecision(3) << (double)(cnt*100)/n<<"%"<<endl;
        numbers.clear();

    }

    return 0;
}
