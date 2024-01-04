#include <iostream> 
using namespace std;

int summation(int a, int b) {
    return a + b;
}

int main() {
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);
    printf("X = %d\n", summation(a, b));
    
    return 0;
}