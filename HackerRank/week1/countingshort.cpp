int* countingSort(int arr_count, int* arr, int* result_count) {
    // frequency array of size 100
    *result_count = 100;
    int* freq = calloc(100, sizeof(int)); // calloc initializes to 0

    // Count occurrences
    for (int i = 0; i < arr_count; i++) {
        freq[arr[i]]++;
    }

    return freq; // return frequency array
}
