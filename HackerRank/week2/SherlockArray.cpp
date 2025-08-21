char* balancedSums(int arr_count, int* arr) {
    long total_sum = 0;
    long left_sum = 0;

    // Calculate total sum
    for (int i = 0; i < arr_count; i++) {
        total_sum += arr[i];
    }

    // Traverse array
    for (int i = 0; i < arr_count; i++) {
        long right_sum = total_sum - left_sum - arr[i];

        if (left_sum == right_sum) {
            return "YES";  // Found index
        }
        left_sum += arr[i];
    }

    return "NO";  // No index found
}
