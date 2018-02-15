#include <iostream>
#include <vector>
#include "algorithms.h"

using namespace std;

int main(){

    vector<int> test;
    int myInt = 0;

    test.push_back(-2);
    test.push_back(11);
    test.push_back(-4);
    test.push_back(13);
    test.push_back(-5);
    test.push_back(-2);

    myInt = maxSubSum2(test);


    return 0;
}

