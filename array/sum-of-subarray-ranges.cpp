class Solution {
public:

// next smaller element
    vector<int> calcnse(vector<int>&nums){
        stack<int>st;
        vector<int>nse(nums.size());
        for(int i = nums.size() - 1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] >= nums[i])
                st.pop();

            if(st.empty()) nse[i] = nums.size();
            else nse[i] = st.top();

            st.push(i);
        }
        return nse;
    }
// previous smaller or equal 
    vector<int> calcpse(vector<int>&nums){
        stack<int>st;
        vector<int>pse(nums.size());
        for(int i = 0; i < nums.size(); i++){
            while(!st.empty() && nums[st.top()] > nums[i]){
                st.pop();
            }
            if(st.empty()) pse[i] = -1;
            else pse[i] = st.top();

            st.push(i);
        }
        return pse;
    }

// next greater element
    vector<int> calcnge(vector<int>&nums){
        stack<int>st;
        vector<int>nge(nums.size());
        for(int i = nums.size() - 1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] <= nums[i])
                st.pop();

            if(st.empty()) nge[i] = nums.size();
            else nge[i] = st.top();

            st.push(i);
        }
        return nge;
    }
// previous greater or equal 
    vector<int> calcpge(vector<int>&nums){
        stack<int>st;
        vector<int>pge(nums.size());
        for(int i = 0; i < nums.size(); i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }
            if(st.empty()) pge[i] = -1;
            else pge[i] = st.top();

            st.push(i);
        }
        return pge;
    }

    long long subArrayRanges(vector<int>& nums) {
        vector<int> pse(nums.size());
        vector<int> nse(nums.size());
        vector<int> pge(nums.size());
        vector<int> nge(nums.size());
        int mod = 1e9 + 7;
        long long totals = 0;
        long long totalg = 0;

        pse = calcpse(nums);
        nse = calcnse(nums);
        pge = calcpge(nums);
        nge = calcnge(nums);

        for(int i = 0; i < nums.size(); i++){
            long long ls = i - pse[i];
            long long rs = nse[i] - i;

            totals += (long long)nums[i] * ls * rs;

            long long lg = i - pge[i];
            long long rg = nge[i] - i;

            totalg += (long long)nums[i] * lg * rg;
        }
        return totalg - totals;
    }
};