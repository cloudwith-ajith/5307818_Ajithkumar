int towerBreakers(int n, int m) {
    if (m == 1) {
        return 2;  // no moves possible
    }
    if (n % 2 == 0) {
        return 2;  // Player 2 mirrors Player 1
    }
    return 1;      // Player 1 wins
}
