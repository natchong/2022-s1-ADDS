#include "Truckloads.h"
#include <iostream>
using namespace std;
#include <iostream>

int main(){
    int numCrates, loadSize;

    std::cout << "Number of crates: " ;
    std::cin >> numCrates;
    std::cout << "Max load size: " ;
    std::cin >> loadSize;

    Truckloads truckloads;
    int numTrucks= truckloads.numTrucks(numCrates, loadSize);
    std::cout << "Number of trucks needed: " << numTrucks << std::endl;

    return 0;
}
