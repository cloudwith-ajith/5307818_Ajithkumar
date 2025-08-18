int main() {
    char a[1001], b[1001];
    scanf("%s", a);
    scanf("%s", b);
    
    int n = strlen(a);
    char result[1001];
    
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) 
            result[i] = '0';
        else 
            result[i] = '1';
    }
    result[n] = '\0';  // null-terminate the string
    
    printf("%s\n", result);
    return 0;
}
