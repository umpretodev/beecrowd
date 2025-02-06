#include <iostream> 
#include <cstring>
using namespace std; 


void handleResponse(string name, int maxLength) {
    if (name.size() > maxLength) {
        printf("%s nao eh facil\n", name.c_str());
        return;
    }

    printf("%s eh facil\n", name.c_str());

}


int main() {
    string name; 
    int number; 

    cin >> number;
    
    while (number--) {
        cin >> name;
        handleResponse(name, 46);
    }

    return 0;
}