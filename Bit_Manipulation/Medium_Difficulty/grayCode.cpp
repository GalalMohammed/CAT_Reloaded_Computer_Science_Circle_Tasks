class Solution {
public:
    vector<int> grayCode(int n) {
        if(n == 1)
        {
            vector<int> ans(2);
            ans[0] = 0;
            ans[1] = 1;
            return ans;
        }
        else
        {
            vector<int> ans = grayCode(n - 1);
            for(int i = 0; i < pow(2, n - 1); i++)
            {
                ans.push_back(ans[pow(2, n - 1) - 1 - i] | (1<<(n - 1)));
            }
            return ans;
        }
    }
};
