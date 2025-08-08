//Space Array

int* r = malloc(queries_count * sizeof(int));

    for (int i = 0; i < queries_count; i++) {
        int count = 0;


        for (int j = 0; j < strings_count; j++) {
            if (strcmp(queries[i], strings[j]) == 0) {
                count++;
            }
        }

        r[i] = count; 
    }

    *result_count = queries_count; 
    return r;
}
