#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // method to return a 2d vector with all possible triplets with sum equal to zero
    vector<vector<int>> threeSum(vector<int> nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int two_sum = -1*nums[i];
            int front = i+1;
            int back = n-1;
            while(front<back)
            {
                if(nums[front]+nums[back]<two_sum) front++;
                else if(nums[front]+nums[back]>two_sum) back--;
                else
                {
                    vector<int>triplet(3);
                    triplet[0] = nums[i];
                    triplet[1] = nums[front];
                    triplet[2] = nums[back];
                    ans.push_back(triplet);
                    while(front<back && triplet[1] == nums[front]) front++;
                    while(front<back && triplet[2] == nums[back]) back--;
                }
            }
            while(i+1<n && nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};
// driver code
int main()
{
    Solution s;
    vector<int> arr = {-1,0,1,2,-1,-4};
    vector<vector<int>>ans = s.threeSum(arr);
    for(auto i:ans)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
