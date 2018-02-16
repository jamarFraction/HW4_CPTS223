#include "Backbone.h"

void startTest(){

    //array size for input
    int arraySize = 0;

    //prompt user for array size to test, read in value
    cout << "Please enter an array size to test (must be some value N = 2^x): ";
    cin >> arraySize;

    //Generate folder path, this will not change during execution
    //testInput/{arraySize}/
    string folderPath = "testInput/";
    folderPath += to_string(arraySize);
    folderPath += "/";

    //File path
    string filePath;

    //run this test on each of the input files
    for(int i = 0; i < 10; i++){

        vector<int> intVector;

        //generate the file path
        filePath = generateFilePath(arraySize, i);

        //create the ifstream with the created path
        ifstream input(folderPath + filePath);

        //check for existence of the created path before attempting to populate the vector
        if(input.is_open()){

            //Load the vector with the values from the file
            fillVector(intVector, input);

        }else{

            //file path DNE
            cout << "ERROR: .txt file path does not exist!" << endl;
            break;
        } 

        //start the timer and pass to each MaxSubSum algo
        //
        //
        //
        //to-do

    }
}

void fillVector(vector<int> &passedVector, ifstream &passedFile){

    int currentInt;

    while(!passedFile.eof()){

        passedFile >> currentInt;

        passedVector.push_back(currentInt);

    }

    //due to the value generator algo a newLine char is placed at the end of each file
    //this will take care of that
    passedVector.pop_back();
}

string generateFilePath(int passedArraySize, int i){

    //produces string of the form:
    //input_{arraySize}_{i}.txt

    string filePath = "input_";

    filePath += to_string(passedArraySize);

    filePath += "_";

    filePath +=  to_string(i);
    
    filePath += ".txt";

    return filePath;

}

