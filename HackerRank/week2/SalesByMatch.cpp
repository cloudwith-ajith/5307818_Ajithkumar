int sockMerchant(int n, int ar_count, int* ar) {
    int freq[101] = {0};  // sock colors range assumed (1 ≤ color ≤ 100)
    int pairs = 0;

    for (int i = 0; i < n; i++) {
        int color = ar[i];
        freq[color]++;

        if (freq[color] % 2 == 0) {  
            pairs++;  // every 2nd sock forms a pair
        }
    }

    return pairs;
}
