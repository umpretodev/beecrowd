#include <iostream>
#include <vector>
using namespace std;

int handleMaxValue(vector<int> sequence) {
    int response = 1;

    for (int i = 0; i < sequence.size() - 1; i++) {
        int value = sequence[i]; 
        int nextValue = sequence[i+1];

        //cout << "value " << value << endl;
        //cout << "next " << nextValue << endl;

        if (value != nextValue) response++;
    }

    return response;
}

int main() {
    int n; 
    vector<int> sequence;

    cin >> n;


    while(n--) {
        int value; 

        cin >> value;
        sequence.push_back(value);
    }

    cout << handleMaxValue(sequence) << endl;


    

    return 0;
}