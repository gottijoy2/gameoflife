#include <iostream>
#include <vector>

// dimensions of the grid
const int ROWS = 10;
const int COLS = 10;

// function to count the number of alive neighbors of a cell
int countAliveNeighbors(std::vector<std::vector<int>>& grid, int row, int col) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int r = row + i;
            int c = col + j;
            // only count if the coordinates are valid and not the cell itself
            if (r >= 0 && r < ROWS && c >= 0 && c < COLS && !(i == 0 && j == 0)) {
                count += grid[r][c];
            }
        }
    }
    return count;
}

int main() {
    // initialize the gri#include <iostream>
#include <vector>

// dimensions of the grid
const int ROWS = 10;
const int COLS = 10;

// function to count the number of alive neighbors of a cell
int countAliveNeighbors(std::vector<std::vector<int>>& grid, int row, int col) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int r = row + i;
            int c = col + j;
            // only count if the coordinates are valid and not the cell itself
            if (r >= 0 && r < ROWS && c >= 0 && c < COLS && !(i == 0 && j == 0)) {
                count += grid[r][c];
            }
        }
    }
    return count;
}

int main() {
    // initialize the grid
    std::vector<std::vector<int>> grid(ROWS, std::vector<int>(COLS));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = 0; // 0 for dead, 1 for alive
        }
    }

    // set some initial cells as alive
    grid[3][3] = 1;
    grid[3][4] = 1;
    grid[3][5] = 1;

    // print the initial grid
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // update the grid for a certain number of generations
    const int NUM_GENERATIONS = 10;
    for (int gen = 0; gen < NUM_GENERATIONS; gen++) {
        std::cout << "Generation " << gen << std::endl;
        std::vector<std::vector<int>> newGrid = grid;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                int aliveNeighbors = countAliveNeighbors(grid, i, j);
                if (grid[i][j] == 1) {
                    if (aliveNeighbors < 2 || aliveNeighbors > 3) {
                        newGrid[i][j
d
    std::vector<std::vector<int>> grid(ROWS, std::vector<int>(COLS));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)

