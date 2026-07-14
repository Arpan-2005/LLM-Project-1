#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
       int maxi = nums[0];
       int n=nums.size();

for(int i = 1; i < n; i++)
{
    if(nums[i] > maxi)
        maxi = nums[i];
}
vector<int> hash(maxi + 1, 0);
for(int i:nums){
    hash[i]++;
}
vector<vector<int>> ans;
for(int j=0;j<=maxi;j++)
{
    if(hash[j]>0){
        ans.push_back({j,hash[j]});
    }
}
return ans;
    }
};

int main() {

    vector<int> nums = {1, 2, 2, 1, 3};

    Solution obj;

    vector<vector<int>> result = obj.countFrequencies(nums);

    cout << "Output:" << endl;

    for (auto row : result) {
        cout << "[" << row[0] << ", " << row[1] << "]" << endl;
    }

    return 0;
}