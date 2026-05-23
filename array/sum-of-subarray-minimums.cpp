class Solution {
public:
// next smaller element
    vector<int> calcnse(vector<int>&arr){
        stack<int>st;
        vector<int>nse(arr.size());
        for(int i = arr.size() - 1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            if(st.empty()) nse[i] = arr.size();
            else nse[i] = st.top();

            st.push(i);
        }
        return nse;
    }
// previous smaller or equal 
    vector<int> calcpse(vector<int>&arr){
        stack<int>st;
        vector<int>pse(arr.size());
        for(int i = 0; i < arr.size(); i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            if(st.empty()) pse[i] = -1;
            else pse[i] = st.top();

            st.push(i);
        }
        return pse;
    }

    int sumSubarrayMins(vector<int>& arr) {
        vector<int> pse(arr.size());
        vector<int> nse(arr.size());
        int mod = 1e9 + 7;
        long long total = 0;

        pse = calcpse(arr);
        nse = calcnse(arr);

        for(int i = 0; i < arr.size(); i++){
            long long left = i - pse[i];
            long long right = nse[i] - i;

            total = (total + (arr[i] * left % mod) * right % mod) % mod;
        }
        return total;
    }
};