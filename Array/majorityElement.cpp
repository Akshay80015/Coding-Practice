#include<iostream>
#include<vector>


using namespace std;


int majorityElement(vector<int>& nums) {
    int ans = nums[0];
    int val = 0;
    for(int i =0;i<nums.size();i++)
    {
        int count = 0;
        for(int j =i+1;j<nums.size();j++)
        {
            if(nums[i]==nums[j])
                count++;
                
                
        }
        if(count>val)
            {  
                 ans = nums[i];
                val =count;
           }
     }
        return ans;
}

int main()
{
    vector<int> arr{1,2,2,3,3,3,3,3};

    int ans = majorityElement(arr);

    cout<<"Answer is "<<ans<<endl;

    return 0;
}