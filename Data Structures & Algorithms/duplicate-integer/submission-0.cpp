class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashmap;
        for (int e : nums) {
            if (hashmap.find(e) != hashmap.end()) return true;
            hashmap.insert(e);
        }
        return false;
    }
};