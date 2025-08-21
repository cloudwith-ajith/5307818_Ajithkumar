char* counterGame(long n) {
    static char louise[] = "Louise";
    static char richard[] = "Richard";

    int moves = 0;  // count number of moves

    while (n > 1) {
        if ((n & (n - 1)) == 0) {
            // if n is power of 2
            n >>= 1;  // divide by 2
        } else {
            // subtract largest power of 2 smaller than n
            long p = 1;
            while (p << 1 <= n) {
                p <<= 1;
            }
            n -= p;
        }
        moves++;
    }

    if (moves % 2 == 1)
        return louise;   // odd moves → Louise
    else
        return richard;  // even moves → Richard
}
