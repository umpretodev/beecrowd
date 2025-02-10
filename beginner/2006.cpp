#include <iostream>
using namespace std;

int resolvePuzzle(int expectedResponse, int responses[]) {
    int acc = 0;

    for (int i = 0; i < 4; i++) {
        int response = responses[i];

        if (response == expectedResponse) acc++;

    }
    return acc;  
}

int main() {
    int expectedResponse; 
    int responses[4];

    for (int i = 0; i < 4; i++) {
        cin >> responses[i];
    }

    printf("%d\n", resolvePuzzle(expectedResponse, responses));
}
