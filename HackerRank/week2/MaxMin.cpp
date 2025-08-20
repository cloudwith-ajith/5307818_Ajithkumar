int cmpfunc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int maxMin(int k, int arr_count, int* arr) {
    // Step 1: Sort the array
    qsort(arr, arr_count, sizeof(int), cmpfunc);

    // Step 2: Initialize minimum unfairness with a large value
    int min_unfairness = INT_MAX;

    // Step 3: Check every window of size k
    for (int i = 0; i <= arr_count - k; i++) {
        int unfairness = arr[i + k - 1] - arr[i];
        if (unfairness < min_unfairness) {
            min_unfairness = unfairness;
        }
    }

    return min_unfairness;
}
