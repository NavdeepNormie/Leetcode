class Solution {
public:
    vector<vector<int>> res;
    void findcombinations(int k, int n, vector<int>path, int start){
        if(k == 0 && n == 0){
            res.push_back(path);
            return;
        }
        for(int i = start; i<=9; i++){
            if(i > n || k <= 0) break;
            path.push_back(i);
            findcombinations(k-1, n - i, path, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> path;
        findcombinations(k,n,path,1);
        return res;
    }
};