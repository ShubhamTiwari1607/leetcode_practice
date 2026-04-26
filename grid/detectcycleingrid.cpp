// Given a 2D array of characters grid of size m x n, you need to find if there exists any cycle consisting of the same value in grid.

// A cycle is a path of length 4 or more in the grid that starts and ends at the same cell. From a given cell, you can move to one of the cells adjacent to it - in one of the four directions (up, down, left, or right), if it has the same value of the current cell.

// Also, you cannot move to the cell that you visited in your last move. For example, the cycle (1, 1) -> (1, 2) -> (1, 1) is invalid because from (1, 2) we visited (1, 1) which was the last visited cell.

// Return true if any cycle of the same value exists in grid, otherwise, return false.

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<pair<int,int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

    bool dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited,int i, int j, int parentX, int parentY) {

        visited[i][j] = true;

        for (auto dir : directions) {
            int x = i + dir.first;
            int y = j + dir.second;

            if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size())
                continue;

            if (grid[x][y] != grid[i][j])
                continue;

            if (!visited[x][y]) {
                if (dfs(grid, visited, x, y, i, j))
                    return true;
            }
            else if (x != parentX || y != parentY) {
                return true;
            }
        }

        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (!visited[i][j]) {
                    if (dfs(grid, visited, i, j, -1, -1))
                        return true;
                }
            }
        }

        return false;
    }
};