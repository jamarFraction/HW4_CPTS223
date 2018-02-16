#include <iostream>
#include <vector>
#include <fstream>
#include <time.h>
#define CLOCKS_PER_MS (CLOCKS_PER_SEC / 1000)    //microseconds

using namespace std;
using std::ifstream;

double startTest(int (*maxSubSumAlgorithm)(const vector<int> &a), int arraySize);

void fillVector(vector<int> &passedVector, ifstream &passedFile);

string generateFilePath(int passedArraySize, int i);