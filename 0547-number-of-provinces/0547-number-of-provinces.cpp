class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int provinces = 0;

        for (int i = 0; i < n; ++i) {
            if (visited[i]) continue;

            provinces++;
            queue<int> q;
            q.push(i);
            visited[i] = true;

            while (!q.empty()) {
                int curr = q.front();
                q.pop();

                for (int next = 0; next < n; ++next) {
                    if (isConnected[curr][next] && !visited[next]) {
                        visited[next] = true;
                        q.push(next);
                    }
                }
            }
        }

        return provinces;
    }
};
        