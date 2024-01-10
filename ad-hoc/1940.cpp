#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int get_winner(const vector<int> &games, int n_players, int n_rounds) {
    vector<int> player_scores(n_players, 0);

    // Add scores
    for (int i = 0; i < n_players * n_rounds; i++ ) {
        int current_player = i % n_players;

        player_scores[i - 1] += player_scores[i];
    }

    // get last winner
    int max_score = 0;
    int winner_index = 0;

    for (int i = 0; i < n_players; i++) {
        if (max_score >= player_scores[i]) {
            winner_index = i;
        }
    }

    return winner_index + 1;

}


int main() {
    int n_players, n_rounds;

    scanf("%d", &n_players);
    scanf("%d", &n_rounds);

    vector<int> games(n_players * n_rounds, 0);

    for (int i = 0; i < n_players * n_rounds; i++) {
        scanf("%d", &games[i]);
    }

    printf("%d\n", get_winner(games, n_players, n_rounds));

    return 0;
}