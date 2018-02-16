#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
using std::ifstream;

void startTest();

void fillVector(vector<int> &passedVector, ifstream &passedFile);

string generateFilePath(int passedArraySize, int i);