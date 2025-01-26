#include <iostream>
using namespace std;

int handleMaxSocketValue(int sockets[]) {
    int socketValue = 0; 

    for(int i = 0; i < 4; i++) {
        socketValue += sockets[i] - 1;
    }

    return socketValue + 1;
}

int main() {
    int sockets[4];

    for(int i = 0; i < 4; i++) {
        cin >> sockets[i];
    }

    cout << handleMaxSocketValue(sockets) << endl;


    return 0;
}