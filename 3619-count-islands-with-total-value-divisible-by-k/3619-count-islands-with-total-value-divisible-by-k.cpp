class Solution {
    #define ll long long int
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size(), ans = 0;

        function<void(int, int, ll&)> dfs = [&](int x, int y, ll& s) ->void {
            s += grid[x][y];
            grid[x][y] = 0;
            if(x + 1 < n && grid[x+1][y]) dfs(x + 1, y, s);
            if(x >= 1 && grid[x-1][y]) dfs(x - 1, y, s);
            if(y + 1 < m && grid[x][y+1]) dfs(x, y + 1, s);
            if(y >= 1 && grid[x][y-1]) dfs(x, y - 1, s); 
        };

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j]) {
                    ll sum = 0;
                    dfs(i, j, sum);
                    if(sum % k == 0) ans++;
                }
            }
        }
        return ans;
    }
};