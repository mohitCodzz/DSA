// 2 Pointers Approach - Optimal Solution
class Solution {
public:
    int maxArea(vector<int>& height) {
      int l=0,currWater=0,maxWater=0;
      int r = height.size()-1;
      while(l<r){
      int w = r - l;
      int h = min(height[l],height[r]);
      currWater = w * h;
maxWater = max(maxWater,currWater);
height[l] < height[r] ? l++:r--;
      }
      return maxWater;
    }
};