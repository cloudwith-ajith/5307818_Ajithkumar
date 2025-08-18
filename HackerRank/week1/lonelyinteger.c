int lonelyinteger(int a_count, int* a) {
    int result = 0;
    for (int i = 0; i < a_count; i++) {
        result ^= a[i];  // XOR each element
    }
    return result;  // The unique integer remains
}
