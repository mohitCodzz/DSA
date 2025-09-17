class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
    int n = nums.size();
    vector<int> keyPos;   // stores indices where nums[i] == key
    vector<int> ans;      // final answer

    // Step 1: collect positions of `key`
    for (int i = 0; i < n; i++) {
        if (nums[i] == key) {
            keyPos.push_back(i);
        }
    }

    // Step 2: check each index if it's close to any key position
    int j = 0;  // pointer for key positions
    for (int i = 0; i < n; i++) {
        // move j forward until keyPos[j] is within reach
        while (j < keyPos.size() && keyPos[j] < i - k) {
            j++;
        }
        // check if current i is within distance k of keyPos[j]
        if (j < keyPos.size() && abs(i - keyPos[j]) <= k) {
            ans.push_back(i);
        }
    }

    return ans;
}

};