int* dynamicArray(int n, int queries_rows, int queries_columns, int** queries, int* result_count) {
    
    int **seqList = (int**)malloc(n * sizeof(int*));
    int *seqSizes = (int*)calloc(n, sizeof(int));   
    int *seqCapacity = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        seqList[i] = (int*)malloc(2 * sizeof(int)); 
        seqCapacity[i] = 2;
        seqSizes[i] = 0;
    }
    
    int lastAnswer = 0;
    int *answers = (int*)malloc(queries_rows * sizeof(int));
    int ansCount = 0;

    for (int i = 0; i < queries_rows; i++) {
        int type = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];

        int idx = (x ^ lastAnswer) % n;  

        if (type == 1) {
            
            if (seqSizes[idx] == seqCapacity[idx]) {
                seqCapacity[idx] *= 2;
                seqList[idx] = (int*)realloc(seqList[idx], seqCapacity[idx] * sizeof(int));
            }
            seqList[idx][seqSizes[idx]++] = y;

        } else if (type == 2) {
            int size = seqSizes[idx];
            int value = seqList[idx][y % size];
            lastAnswer = value;
            answers[ansCount++] = lastAnswer;
        }
    }

    *result_count = ansCount;
    return answers;
}
