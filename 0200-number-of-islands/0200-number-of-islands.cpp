class Solution {
    void dfs(int row, int col, vector<vector<char>>& grid, int n, int m, vector<vector<bool>>& vis){

        if(row>=n || row<0 || col>=m || col<0 || vis[row][col] || grid[row][col] == '0') return;
        vis[row][col] = true;
        dfs(row+1, col, grid, n, m, vis);
        dfs(row-1, col, grid, n, m, vis);
        dfs(row, col-1, grid, n, m, vis);
        dfs(row, col+1, grid, n, m, vis);

        // int drow[4]={-1,0,1,0};
        // int dcol[4]={0,1,0,-1};
        // for(int i=0; i<4; i++){   
        //         int nrow = row + drow[i];
        //         int ncol = col + dcol[i];
        //         {
        //             vis[nrow][ncol] = true;
        //             dfs(nrow, ncol, grid, n, m, vis);
        //     }
        // }
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