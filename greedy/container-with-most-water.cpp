class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int area = 0;

        while(i < j){
            int width = j - i;
            int h = std::min(height[i], height[j]);
            int current_area = h * width;
            area = std::max(area, current_area);

            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        return area;
    }
};
