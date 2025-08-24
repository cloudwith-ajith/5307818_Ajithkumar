
char* isValid(char* s) {
    static char YES[] = "YES";
    static char NO[] = "NO";

    int freq[26] = {0};
    int n = strlen(s);


    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }


    int freqCount[101] = {0};  
    int minFreq = 101, maxFreq = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            freqCount[freq[i]]++;
            if (freq[i] < minFreq) minFreq = freq[i];
            if (freq[i] > maxFreq) maxFreq = freq[i];
        }
    }

    
    if (minFreq == maxFreq) return YES;

    if (freqCount[1] == 1 && freqCount[maxFreq] * maxFreq + 1 == n) return YES;

   
    if (freqCount[maxFreq] == 1 && maxFreq - minFreq == 1) return YES;

    return NO;
}

int main() {
    char s[100005];
    scanf("%s", s);

    printf("%s\n", isValid(s));
    return 0;
}
