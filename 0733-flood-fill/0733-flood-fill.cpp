class Solution {
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int drow[], int dcol[], int ogColor){
        image[sr][sc] = color;
        int n = image.size();
        int m = image[0].size();

        for(int i=0; i<4; i++){
            int nrow = sr + drow[i];
            int ncol = sc + dcol[i];
            if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && image[nrow][ncol] == ogColor && image[nrow][ncol]!=color){
                    dfs(image, nrow, ncol, color, drow, dcol, ogColor);
                }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int ogColor = image[sr][sc];
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,-1,0,1};
        dfs(image,sr,sc,color,drow,dcol,ogColor);
        return image;
    }
};