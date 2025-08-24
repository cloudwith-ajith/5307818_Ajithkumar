int* climbingLeaderboard(int ranked_count, int* ranked, int player_count, int* player, int* result_count) {
    // First compress the ranked scores into unique scores
    int* unique = malloc(ranked_count * sizeof(int));
    int unique_count = 0;

    unique[unique_count++] = ranked[0];
    for (int i = 1; i < ranked_count; i++) {
        if (ranked[i] != ranked[i-1]) {
            unique[unique_count++] = ranked[i];
        }
    }

    int* result = malloc(player_count * sizeof(int));
    *result_count = player_count;

    int idx = unique_count - 1;  // Start from lowest unique score

    for (int i = 0; i < player_count; i++) {
        int score = player[i];

        // Move up while player's score >= leaderboard score
        while (idx >= 0 && score >= unique[idx]) {
            idx--;
        }

        // Rank is idx+2 because:
        // if score is less than unique[idx], rank is (idx+2)
        // if score beats all, idx becomes -1, so rank = 1
        result[i] = idx + 2;
    }

    return result;
}
