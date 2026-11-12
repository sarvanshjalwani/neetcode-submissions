class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(auto num : nums){
            int pos_num = abs(num);
            int index = pos_num - 1;
            if(nums[index]<0){
                return pos_num;
            }
            nums[index] = -1*nums[index];
        }

        return -1;

    }
};
