#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Directions for searching (8 total: right, left, down, up, and diagonals)
const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
const string word = "XMAS";

bool isValid(int x, int y, int rows, int cols) {
    return x >= 0 && y >= 0 && x < rows && y < cols;
}

// Function to search for the word starting from (x, y) in a given direction
bool searchWord(const vector<vector<char>>& grid, int x, int y, int dirX, int dirY) {
    int rows = grid.size(), cols = grid[0].size();
    int n = word.length();
    
    for (int i = 0; i < n; i++) {
        int newX = x + i * dirX;
        int newY = y + i * dirY;

        if (!isValid(newX, newY, rows, cols) || grid[newX][newY] != word[i]) {
            return false;
        }
    }
    return true;
}

// Main function to count all matches
int countMatches(const vector<vector<char>>& grid) {
    int rows = grid.size(), cols = grid[0].size();
    int count = 0;

    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < cols; y++) {
            for (int d = 0; d < 8; d++) {
                if (searchWord(grid, x, y, dx[d], dy[d])) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    // Example 2D array (grid)
    // hardcode size
    vector<vector<char>> grid(10);
    string s;
    int i =0;

    while(getline(cin, s)){
        for(auto c : s){
            grid[i].emplace_back(c);
        }
        i++;
    }



    // cout << "Grid:" << endl;
    // for (const auto& row : grid) {
    //     for (char c : row) {
    //         cout << c << " ";
    //     }
    //     cout << endl;
    // }

    int matches = countMatches(grid);
    cout << matches << endl;

    return 0;
}
