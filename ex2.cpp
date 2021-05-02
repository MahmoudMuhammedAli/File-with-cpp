#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    //For writing text file
    //Creating ofstream & ifstream class object
    ifstream ini_file{"file_example.txt"};
    ofstream out_file{"file_copy.txt"};

    if (!ini_file || !out_file)
    {
        cerr << "at least one of the files is corrupted ";
    }

    while (getline(ini_file, line))
    {
        for (string::iterator it = line.begin(); it != line.end(); ++it)
        {
            if (*it == ' ')
            {
                *it = ',';
            }
        }
        line += ";";
        out_file << line;
    }
    cout << "DONE! \n";
    ini_file.close();
    out_file.close();
    return 0;
}