#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int CatCount (string s)
{
    int occurrences = 0;
    string cat = "cat";
    string::size_type pos = 0;
    while ((pos = s.find(cat, pos)) != string::npos) {
        ++occurrences;
        pos += cat.length();
    }
    return occurrences;
}

int main()
{
    int choice;
    cout << "enter 1 to read a file or 2 to enter input in this console" << endl;
    cin >> choice;
    if (choice == 1)
    {
        string filename;
        ifstream infile;
        cout << "Enter file name\n";
        getline (cin >> ws, filename);
        if (infile.fail())
        {
            cout << "file cannot be read.\n";
        }
        else
        {
            infile.open(filename);
            string filetext;
            int total = 0;
            while (getline(infile, filetext))
            {
                total += CatCount(filetext);
            }
            cout << total << endl;
        }
    }
    else if (choice == 2)
    {
        string input;
        cout << "Please enter a string.\n";
        getline (cin >> ws, input);
        cout << CatCount (input);
    }

}