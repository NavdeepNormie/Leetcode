class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int>store;
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[i].size(); j++){
                store.push_back(matrix[i][j]);
            }
        }
        for(int i = 0; i<store.size(); i++){
            pq.push(store[i]);
        }
        while(k>1){
            pq.pop();
            k--;
        }
    return pq.top();
    }
};