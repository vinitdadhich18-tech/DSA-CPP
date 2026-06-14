class Solution {
public:
    int maxArea(vector<int>& height) {

        int l = 0, r = height.size() - 1;
        int area = 0, maxarea = 0;

        while (l < r) {
            int h = min(height[l], height[r]);

            int w = r - l;

            area = w * h;
            maxarea = max(maxarea, area);

            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxarea;
    }
};