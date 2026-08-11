class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans= "";
        int n = strs.size();
        int mini = INT_MAX;
        for(auto i:strs){
            int size = i.size();
            mini = min(mini, size);
            continue;
        }
        for(int i=0;i<mini;i++){
            int j = 1;
           for( j;j<n;j++){
            if(strs[j][i] == strs[j-1][i]) continue;
            else break;
           }
           if(j==n) ans.push_back(strs[0][i]);
           else break;
        }
        cout<<n<<" "<<mini<<endl;
        return ans;
    }
};