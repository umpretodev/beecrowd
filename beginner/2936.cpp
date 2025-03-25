#include <iostream>
using namespace std;


int main() {
    int response = 0;
    int value;
    int map[6] = { 300, 1500, 600, 1000, 150, 225 };

    for (int i = 0; i < 6; i++) {
        value = 1;

        if (i < 5) cin >> value;
        response +=  value * map[i];            
    }

    cout << response << endl;

    return 0;
}