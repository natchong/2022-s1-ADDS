#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates < 2 || numCrates >10000 || loadSize < 1 || loadSize > (numCrates-1)){
        return 0;
    }else 
    if (numCrates <= loadSize){ 
        return 1;
    }
    int half = numCrates/2; 
    return numTrucks(half, loadSize) + numTrucks(numCrates-half, loadSize);
}
