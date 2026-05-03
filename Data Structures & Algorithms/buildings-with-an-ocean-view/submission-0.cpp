class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int n = heights.size();
        vector<int> res;
        int maxH = 0;
        for (int i = n-1; i >= 0; i--) {
            if (heights[i] > maxH) {
                res.push_back(i);
                maxH = heights[i];
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};