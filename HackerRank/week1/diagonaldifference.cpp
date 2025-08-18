int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int primary = 0, secondary = 0;

    for (int i = 0; i < arr_rows; i++) {
        primary += arr[i][i];                 // left-to-right diagonal
        secondary += arr[i][arr_rows - i - 1]; // right-to-left diagonal
    }

    return abs(primary - secondary);
}
