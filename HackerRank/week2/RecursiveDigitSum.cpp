int digitSum(long long num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int superDigitHelper(long long num) {
    if (num < 10) return num;  // base case
    return superDigitHelper(digitSum(num));
}

int superDigit(char* n, int k) {
    long long initialSum = 0;

    // sum of digits of string n
    for (int i = 0; n[i] != '\0'; i++) {
        initialSum += (n[i] - '0');
    }

    // multiply by k (because we repeat string n, k times)
    initialSum *= k;

    // now recursively find super digit
    return superDigitHelper(initialSum);
}
