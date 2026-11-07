class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> ans(n);
        for(int i = 0 ; i<n ; i++){
            ans[i].first = nums[i];
            ans[i].second = i;
        }
        sort(ans.begin() , ans.end());
        int i = 0 , j = n-1;
        while(i<n && j>=0 && i<j){
            if(ans[i].first+ans[j].first==target){
                if(ans[i].second<ans[j].second){
                    return {ans[i].second , ans[j].second};
                }
                return {ans[j].second , ans[i].second};
            }
            else if(ans[i].first+ans[j].first<target){
                i++;
            }
            else{
                j--;
            }
        }
        return {};
    }
};
