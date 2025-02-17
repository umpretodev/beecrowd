#include <iostream>
using namespace std;

bool isBigWorld(string world) {
    return world.size() >= 10; 
}

int main() {
    string world;

    string bigWorld = "palavrao\n";
    string smallWorld = "palavrinha\n";

    cin >> world; 
    isBigWorld(world) ? cout << bigWorld : cout << smallWorld;
    
    return 0;
}