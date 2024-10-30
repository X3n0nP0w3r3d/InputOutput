#include <bits/stdc++.h>
#define opt(); ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

using namespace std;
//  int traverse(vector<vector<int>>& grid, int orig_num, int x, int y, int count){
//     if(x > grid[0].size()-1 || y > size(grid)-1){
//         return count;
//     } else if (grid[y][x] <= orig_num){
//         return count;
//     }
//     count++;
//     return max(
//         traverse(grid, grid[y][x], x+1, y+1, count), 
//         max (traverse(grid, grid[y][x], x+1, y-1, count), traverse(grid, grid[y][x], x+1, y, count))
//     );
//  }
//  int maxMoves(vector<vector<int>>& grid) {
//     int maxmoves = 0;
//     opt();
//     for(int i=0; i<grid.size(); i++){
//         maxmoves = max(traverse(grid, -1, 0, i, -1), maxmoves);
//     }
//     return maxmoves;
// }

// CHATGPT MINI
// int traverse(vector<vector<int>>& grid, vector<vector<int>>& memo, int orig_num, int x, int y) {
//     // Check boundaries
//     if (x >= grid[0].size() || y < 0 || y >= grid.size()) {
//         return 0; // Out of bounds
//     }
    
//     // Check if the current cell is not greater than orig_num
//     if (grid[y][x] <= orig_num) {
//         return 0; // Cannot move further
//     }
    
//     // Check memoization table
//     if (memo[y][x] != -1) {
//         return memo[y][x]; // Return the stored result
//     }

//     // Count the current move and explore the next positions
//     int count = 0; // Current move

//     // Explore all possible moves
//     count += max({ 
//         traverse(grid, memo, grid[y][x], x + 1, y + 1), 
//         traverse(grid, memo, grid[y][x], x + 1, y - 1), 
//         traverse(grid, memo, grid[y][x], x + 1, y) 
//     });

//     // Store the result in the memoization table
//     memo[y][x] = count;
//     return count;
// }

// int maxMoves(vector<vector<int>>& grid) {
//     int maxmoves = 0;
//     vector<vector<int>> memo(grid.size(), vector<int>(grid[0].size(), -1)); // Initialize memoization table
//     for (int i = 0; i < grid.size(); i++) {
//         maxmoves = max(maxmoves, traverse(grid, memo, -1, 0, i));
//     }
//     return maxmoves;
// }

// CHINESE CRAZY CODE BEATS 100%
int maxMoves(vector<vector<int>>& grid) {  // WA2
    int m = grid.size(), n = grid[0].size();
    // 無法用 sentinel： 因為左邊界也需要和左邊的格子比較大小，但只有 dp 有多一列，grid 沒有
    // vector<int> dp(m + 2);    dp[0] = INT_MIN;    dp[m + 1] = INT_MIN;

    int res = 0;
    vector<int> dp(m);

    for (int j = 1; j < n; ++j) {
        int leftTop = 0;  // 1
        bool found = false;
        
        for (int i = 0; i < m; ++i) {
            int cur = -1;
            int nxtLeftTop = dp[i];  // next leftTop   1

            if (i - 1 >= 0 && leftTop != -1 && grid[i][j] > grid[i - 1][j - 1]) {
                cur = max(cur, leftTop + 1);
            }
            if (dp[i] != -1 && grid[i][j] > grid[i][j - 1]) {
                cur = max(cur, dp[i] + 1);
            }
            if (i + 1 < m && dp[i + 1] != -1 && grid[i][j] > grid[i + 1][j - 1]) {
                cur = max(cur, dp[i + 1] + 1);
            }
            
            dp[i] = cur;
            found = found || (dp[i] != -1);  // check if found in this col
            
            leftTop = nxtLeftTop;
        }
        if (!found) break;
        res = j;
    }

    return res;
}

int main(){
    // vector<vector<int>> input = {{2,4,3,5},{5,4,9,3},{3,4,2,11},{10,9,13,15}};
    vector<vector<int>> input = {{3,2,4},{2,1,9},{1,1,7}};
    // vector<vector<int>> input = {
    //     {1000000,92910,1021,1022,1023,1024,1025,1026,1027,1028,1029,1030,1031,1032,1033,1034,1035,1036,1037,1038,1039,1040,1041,1042,1043,1044,1045,1046,1047,1048,1049,1050,1051,1052,1053,1054,1055,1056,1057,1058,1059,1060,1061,1062,1063,1064,1065,1066,1067,1068},
    //     {1069,1070,1071,1072,1073,1074,1075,1076,1077,1078,1079,1080,1081,1082,1083,1084,1085,1086,1087,1088,1089,1090,1091,1092,1093,1094,1095,1096,1097,1098,1099,1100,1101,1102,1103,1104,1105,1106,1107,1108,1109,1110,1111,1112,1113,1114,1115,1116,1117,1118}};

    cout << maxMoves(input);
    return 0;
}