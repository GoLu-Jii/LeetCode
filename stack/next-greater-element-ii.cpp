class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        vector<int> nums1(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            nums1[i] = nums[i % n];
        }

        vector<int> res(2 * n, -1);
        stack<int> st;

        for (int i = 2 * n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums1[i]) {
                st.pop();
            }

            if (!st.empty()) {
                res[i] = st.top();
            }

            st.push(nums1[i]);
        }

        return vector<int>(res.begin(), res.begin() + n);
    }
};