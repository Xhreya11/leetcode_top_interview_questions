class Solution {
    void dfs(int row, int col, vector<vector<char>>& grid, int n, int m, vector<vector<bool>>& vis){
        vis[row][col] = true;
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};

        for(int i=0; i<4; i++){
            
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && !vis[nrow][ncol] && grid[nrow][ncol] == '1'){
                    vis[nrow][ncol] = true;
                    dfs(nrow, ncol, grid, n, m, vis);
                
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis (n, vector<bool>(m,false));
        int num_of_islands = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    num_of_islands++;
                    dfs(i, j, grid, n, m, vis);
                }
            }
        }
        return num_of_islands;
    }
};