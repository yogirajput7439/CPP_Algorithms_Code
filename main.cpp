#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;

    void backtrack(vector<int>& nums, vector<bool>& used) {

        if(path.size() == nums.size()) {
            result.push_back(path);
            return;
        }

        for(int i = 0; i < nums.size(); i++) {

            if(used[i]) continue;

            used[i] = true;
            path.push_back(nums[i]);

            backtrack(nums, used);

            path.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<bool> used(nums.size(), false);

        backtrack(nums, used);

        return result;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans = obj.permute(nums);

    for(auto &v : ans) {
        for(int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}