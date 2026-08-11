class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> res;
        
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(target - nums[i]) != mp.end()) {
                res.push_back(mp[target - nums[i]]);
                res.push_back(i);
                return res; // Solution kedachadhum return panradhu
            }
            mp[nums[i]] = i; // Target match aagalana map-la add panradhu
        }
        
        return res; // Empty vector return (safe side)
    }
};