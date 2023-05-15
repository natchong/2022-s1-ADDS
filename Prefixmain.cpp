#include <iostream>
#include "PrefixMatcher.h"
using namespace std;


int main() {
    PrefixMatcher pm;
    pm.insert("110011011101", 1);
    pm.insert("110011011", 2);
    pm.insert("11001101", 3);

    string networkAddress = "11001101110101010";
    int routerNumber = pm.selectRouter(networkAddress);

    if (routerNumber != -1) {
        cout << "Selected Router: " << routerNumber << endl;
    } else {
        cout << "No matching router found." << endl;
    }

    return 0;
}
