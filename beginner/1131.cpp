#include <iostream>
#include <vector>
using namespace std;

void grenal_metrics(vector<int> &inter_scores, vector<int> &gremio_scores) {
    int inter_victories = 0; 
    int gremio_victories = 0;

    int inter_victories_counter = 0;
    int gremio_victories_counter = 0;
    
    
    for (int i = 0; i < inter_scores.size(); i++) {
        int inter_score = inter_scores[i];
        int gremio_score = gremio_scores[i];

        if (inter_score > gremio_score) {
            inter_victories ++;
            inter_victories_counter ++;
        }
            
        if (inter_score < gremio_score) {
            gremio_victories ++;
            gremio_victories_counter ++;
        }
        
    }

    string best_team = "Gremio venceu mais";

    if (inter_victories_counter > gremio_victories_counter) {
        best_team = "Inter venceu mais";
    }


    printf("%d grenais\n", inter_scores.size());
    printf("Inter:%d\n", inter_victories);
    printf("Gremio:%d\n", gremio_victories);
    printf("Empates:%d\n", inter_scores.size() - (inter_victories + gremio_victories));
    cout << best_team << endl;
}

int main() {
    int grenal_controller;
    
    vector<int> inter_scores;
    vector<int> gremio_scores;


    do {
        int inter_score, gremio_score;

        scanf("%d", &inter_score);
        scanf("%d", &gremio_score);


        inter_scores.push_back(inter_score);
        gremio_scores.push_back(gremio_score);

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &grenal_controller);

    } while (grenal_controller != 2);


    grenal_metrics(inter_scores, gremio_scores);
    return 0;
}