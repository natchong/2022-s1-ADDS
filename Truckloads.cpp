#include "Truckloads.h"
using namespace std;
#include <iostream> 


int Truckloads::numTrucks(int numCrates, int loadSize){

    int count;

    if(numCrates==0 || loadSize ==0){
        return 0; 
    }
    if (numCrates <= loadSize){
        return 1;
    }

    if(numCrates %2 != 0){
        int first_pile = numCrates/2;
        int second_pile = numCrates - first_pile;
        return numTrucks(first_pile, loadSize) + numTrucks(second_pile, loadSize);
    }

    else{
        numCrates = numCrates/2;
        count ++;
    }
    return numTrucks(numCrates, loadSize) + numTrucks(numCrates, loadSize);
} 
