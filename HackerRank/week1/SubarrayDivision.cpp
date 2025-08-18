int birthday(int s_count, int* s, int d, int m) {
    int count = 0;

    // Loop through the chocolate bar
    for (int i = 0; i <= s_count - m; i++) {
        int sum = 0;

        // Calculate sum of current segment of length m
        for (int j = 0; j < m; j++) {
            sum += s[i + j];
        }

        // Check if it matches the birthday condition
        if (sum == d) {
            count++;
        }
    }

    return count;
}
