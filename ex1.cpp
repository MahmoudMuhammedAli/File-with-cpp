#include <iostream>
#include <string>
#include <fstream> 
#include <cstdlib> 
using namespace std;
int main()
{
    ofstream outClientFile("file_example.txt", ios::out);
    if (!outClientFile)
    {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    } // end if
    cout << "Enter first name, last name, id ,and hash code." << endl
         << "Enter end-of-file to end input.\n? ";
    string firstName;
    string lastName;
    int id;
    string hash;
    while (cin >> firstName >> lastName >> id >> hash)
    {
        outClientFile << firstName << ' ' << lastName << ' ' << id << ' ' << hash << endl;
        cout << "? ";
    }
} 
