class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>next_greater;
        vector<int> ans;

        for(int item : nums2){
            while(!st.empty() && st.top() < item){
                next_greater[st.top()] = item;
                st.pop();
            }
            st.push(item);
        }

        while(!st.empty()){
            next_greater[st.top()] = -1;
            st.pop();
        }

        for(int i = 0; i < nums1.size(); i++){
            ans.push_back(next_greater[nums1[i]]);
        }
        
        return ans;
    }
};