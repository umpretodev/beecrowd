#include <iostream>
#include <vector>
using namespace std;

int handleAccRightValues(int expectedValue, vector<int> values) {
    int acc = 0;

    for (int value : values) {
        if (value == expectedValue) acc++;
    }

    return acc;
}

int main() {
    int expectedValue; 
    vector<int> values(5);

    cin >> expectedValue;

    for (int i = 0; i < 5; i++) {
        cin >> values[i];
    }

    cout << handleAccRightValues(expectedValue, values) << endl;
}
