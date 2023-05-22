#include<iostream>
#include<vector>

using namespace std;

 int maxProfit(vector<int>& prices) {
        int profit =0;
        for(int i= 0;i<prices.size();i++)
        {
            for(int j =i+1;j<prices.size();j++)
            {
                if(prices[j]>prices[i])
                {
                    int ans = prices[j]-prices[i];
                    if(ans > profit)
                        profit = ans ;
                }
            }
        }
        return profit ;
    }

int main()
{ 
    vector<int> arr{7,1,5,3,6,4};

    int ans = maxProfit(arr);

    cout<<"Answer is "<<ans<<endl;
    return 0;
}