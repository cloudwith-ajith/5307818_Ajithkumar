char** detonate(int r, int c, char** grid) {
    char** result = malloc(r * sizeof(char*));
    for (int i = 0; i < r; i++) {
        result[i] = malloc((c + 1) * sizeof(char));
        memset(result[i], 'O', c);  /
        result[i][c] = '\0';
    }

    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == 'O') {
                result[i][j] = '.'; /
                for (int k = 0; k < 4; k++) {
                    int ni = i + dr[k], nj = j + dc[k];
                    if (ni >= 0 && ni < r && nj >= 0 && nj < c) {
                        result[ni][nj] = '.';
                    }
                }
            }
        }
    }
    return result;
}

char** bomberMan(int n, int r, char** grid, int* result_count) {
    *result_count = r;

    if (n == 1) {
        return grid; // unchanged
    }

    // Full grid
    char** fullGrid = malloc(r * sizeof(char*));
    for (int i = 0; i < r; i++) {
        fullGrid[i] = malloc((strlen(grid[i]) + 1) * sizeof(char));
        memset(fullGrid[i], 'O', strlen(grid[i]));
        fullGrid[i][strlen(grid[i])] = '\0';
    }

    if (n % 2 == 0) {
        return fullGrid;
    }

    // Compute first and second detonation states
    char** grid1 = detonate(r, strlen(grid[0]), grid);
    char** grid2 = detonate(r, strlen(grid[0]), grid1);

    if (n % 4 == 3) {
        return grid1;
    } else { // n % 4 == 1
        return grid2;
    }
}
