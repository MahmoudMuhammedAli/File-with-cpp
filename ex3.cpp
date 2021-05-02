#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream examplefile("file_example.txt", ios::in);
    char numOfChars;
    int i, counter = 0;
    while (examplefile){
        examplefile.get(numOfChars);
        i = numOfChars;
        if ((i > 64 && i < 91) || (i > 96 && i < 123))
            counter++;
    }
    cout << "\n No. of Characters in a File : " << counter;
    return 0;
}