char* pangrams(char* s) {
    static char pangram_str[] = "pangram";
    static char not_pangram_str[] = "not pangram";

    bool seen[26] = {false};
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            char lower = tolower(s[i]);
            int idx = lower - 'a';
            if (!seen[idx]) {
                seen[idx] = true;
                count++;
            }
        }
    }

    if (count == 26) {
        return pangram_str;
    } else {
        return not_pangram_str;
    }
}
