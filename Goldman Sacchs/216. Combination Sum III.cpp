class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void rec(int cnt, int last, int sum, int k, int n){
        if (cnt==k){
            if (sum==n){
                ans.push_back(temp);
            }
            return;
        }
        if (sum>n)return;
        for (int i=last+1;i<=9;i++){
            temp.push_back(i);
            rec(cnt+1,i,sum+i,k,n);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        rec(0,0,0,k,n);
        return ans;
    }
};