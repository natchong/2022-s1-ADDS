#include <iostream>
#include <vector>
#include <unordered_map>
#include "Autocomplete.h"

using namespace std;

int main() {
    Autocomplete ac;
    ac.insert("bin");
    ac.insert("ball");
    ac.insert("ballet");

    vector<string> words = ac.getSuggestions("b");
    cout << "Suggestions for 'b': ";
    for (string& w : words) {
        cout << w << " ";
    }
    cout << endl;

    words = ac.getSuggestions("ba");
    cout << "Suggestions for 'ba': ";
    for (string& w : words) {
        cout << w << " ";
    }
    cout << endl;

    words = ac.getSuggestions("bal");
    cout << "Suggestions for 'bal': ";
    for (string& w : words) {
        cout << w << " ";
    }
    cout << endl;

    words = ac.getSuggestions("balle");
    cout << "Suggestions for 'balle': ";
    for (string& w : words) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}
