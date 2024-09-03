#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    cout << i << ", " << j << endl;
                    return {i, j};
                }
            }

        }
        return {};
    }
};

int main(){
    vector <int> nums = {3,2,4};
    int target = 6;
    Solution sol;
    sol.twoSum(nums, target);
    return 0;
}