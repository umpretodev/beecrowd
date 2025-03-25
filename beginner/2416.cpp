#include <iostream>
using namespace std;

int handleBreakPoint(int trackSize, int fixSize) {
    return trackSize % fixSize;
}

int main() {
    int trackSize, fixSize;

    cin >> trackSize;
    cin >> fixSize;

    cout << handleBreakPoint(trackSize, fixSize) << endl; 

    return 0;
}