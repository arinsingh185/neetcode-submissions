class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numbers;
        for(int i = 0; i < nums.size(); i++){
            numbers[nums[i]] = i;
        }

        int diff {};
        for(int i = 0; i < nums.size(); i++){
            diff = target - nums[i];
            if(numbers.count(diff) && numbers[diff] != i){
                return {i, numbers[diff]};
            }
        }
    return {};
    }
};
