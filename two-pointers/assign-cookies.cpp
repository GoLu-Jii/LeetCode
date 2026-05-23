class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        // vector<bool>visited(s.size(), 0);
        // int count = 0;
        // for(int i = 0; i < g.size(); i++){
        //     for(int j = 0; j < s.size(); j++){
        //         if(visited[j] == 0 && s[j] >= g[i]){
        //             visited[j] = 1;
        //             count++;
        //             break;
        //         }
        //     }
        // }
        // return count;

        int i = 0;
        int j = 0;
        int count = 0;
        while(i < g.size() && j < s.size()){
            if(s[j] >= g[i]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};