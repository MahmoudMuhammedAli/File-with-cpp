#include <iostream>
#include <string>
#include <fstream> // contains file stream processing types
#include <cstdlib> // exit function prototype
using namespace std;
int main()
{
    // ofstream constructor opens file
    ofstream outClientFile("file_example.txt", ios::out);
    // exit program if unable to create file
    if (!outClientFile) // overloaded ! operator
    {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    } // end if
    cout << "Enter first name, last name, id ,and hash code." << endl
         << "Enter end-of-file to end input.\n? "; // the account number
    string firstName;
    string lastName; // the account owner's name
    int id;
    string hash; // the account balance
    // read account, name and balance from cin, then place in file
    while (cin >> firstName >> lastName >> id >> hash)
    {
        outClientFile << firstName << ' ' << lastName << ' ' << id << ' ' << hash << endl;
        cout << "? ";
    } // end while
} // end main
