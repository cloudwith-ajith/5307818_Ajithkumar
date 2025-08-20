char* gridChallenge(int grid_count, char** grid) {
    int n = grid_count;

    for (int i = 0; i < n; i++) {
        int len = strlen(grid[i]);
        qsort(grid[i], len, sizeof(char), (int (*)(const void*, const void*))strcmp);
    }

    for (int col = 0; col < n; col++) {
        for (int row = 1; row < n; row++) {
            if (grid[row][col] < grid[row - 1][col]) {
                static char no[] = "NO";
                return no;
            }
        }
    }

    static char yes[] = "YES";
    return yes;
}
