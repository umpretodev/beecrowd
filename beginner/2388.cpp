#include <iostream>
using namespace std;


int handleDistance(int v, int t) {
    return (t * v);
}

int main() {
    int n;
    int s = 0, v, t;

    while (n--) {
        cin >> v;
        cin >> t; 
        s += handleDistance(v, t);
    }

    cout << s << endl;
    return 0;
}