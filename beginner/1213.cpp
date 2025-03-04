#include <iostream>
#include <string> 

using namespace std; 

int handleResponse(int number) {
    string multipleOnes = "11"; 

    while (stoi(multipleOnes) % number != 0) {
        multipleOnes += '1';
    }

    return  multipleOnes.size();
}

int main() {
    int number;

    while(true) {
            cin >> number;
            cout << handleResponse(number) << endl;
        }
    return 0;
}