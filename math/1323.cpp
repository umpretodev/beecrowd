#include <iostream>
using namespace std; 

int handleSquares(int n) {
    int response = 0;

    for (int i = 1; i <= n; i++) {
        response += i * i;
    }

    return response;
}

int main() {
    int value = 1;

    while(value) {
        scanf("%d", &value);
        
        if (!value) break;
        printf("%d\n", handleSquares(value));
    }

    return 0;
}