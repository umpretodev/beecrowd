#include <iostream>
using namespace std; 

void aboveMedia(int n, int scores[]) {
    float mediaBase, media;

    media = 0;
    mediaBase = 0;

    for (int i = 0; i < n; i ++) {
        mediaBase += scores[i];
    }

    mediaBase = mediaBase / n;

    for (int i = 0; i < n; i ++) {
        if (scores[i] > mediaBase) {
            media ++; 
        }
    }

    media = (media / n) * 100;
    printf("%.3f%\n", media);
}

int main() {
    int cases, students, scores[1000]; 

    scanf("%d", &cases);

    for (int i = 0; i < cases; i ++) {
        scanf("%d", &students);
        
        for (int j = 0; j < students; j ++) {
            scanf("%d", &scores[j]);
        }
        
        aboveMedia(students, scores);
    }

    return 0;
}