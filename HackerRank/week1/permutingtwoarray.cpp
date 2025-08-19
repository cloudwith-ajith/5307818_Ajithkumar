int cmp_asc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int cmp_desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

char* twoArrays(int k, int A_count, int* A, int B_count, int* B) {
    static char YES[] = "YES";
    static char NO[] = "NO";

    // Sort A ascending
    qsort(A, A_count, sizeof(int), cmp_asc);

    // Sort B descending
    qsort(B, B_count, sizeof(int), cmp_desc);

    for (int i = 0; i < A_count; i++) {
        if (A[i] + B[i] < k) {
            return NO;
        }
    }

    return YES;
}
