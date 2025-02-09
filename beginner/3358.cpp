#include <iostream> 
#include <cstring>
using namespace std; 

bool isConsoant(char character) {
    char vogals[5] = {'A', 'E', 'I', 'O', 'U'};

    for (char vogal : vogals) {
        if (vogal == toupper(character)) {
            return false;
        }
    }

    return true;
}

bool isHardName(string name) {
    for (int i = 0; i < name.size(); i++) {
        int counter = 0;

        for (int j = i; j <= i + 2 && j < name.size(); j++) {
            char character = name[j];

            if (isConsoant(character)) counter++;
            else break;

            if (counter == 3) return true;
        }

    }

    return false;
}


int main() {
    int n;
    cin >> n;

    while (n--) {
        string name; 
        cin >> name;

        if (isHardName(name)) printf("%s nao eh facil\n", name.c_str());
        else printf("%s eh facil\n", name.c_str());
    }

    return 0;
}