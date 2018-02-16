#include "algorithms.h"
#include "Backbone.h"


int main(){

    //container for each algorithm's average run time
    double averageRunTime[4];

    //will hold the value from user
    int arraySize = 0;

    //prompt user for array size to test, read in value
    cout << "Please enter an array size to test (must be some value N = 2^x): ";
    cin >> arraySize;

    //run the tests
    averageRunTime[0] = startTest(maxSubSum1, arraySize);
    averageRunTime[1] = startTest(maxSubSum2, arraySize);
    averageRunTime[2] = startTest(maxSubSum3, arraySize);
    averageRunTime[3] = startTest(maxSubSum4, arraySize);

    cout << "\n\n" << endl;

    //print the results
    for(int i = 0; i < 4; i++){

            cout << "Arlgorithm [" << i + 1 << "] average run time: " << averageRunTime[i] << "ms" << endl;

    }

    //wait for input
    cin.get();

    return 0;
}

