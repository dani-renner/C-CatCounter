#include <iostream>
#include <string>
#include <fstream>
#include "CatCounter.h"
using namespace std;

int count(string s, string c)
{
    int occurrences = 0;
    string::size_type pos = 0;
    while ((pos = s.find(c, pos)) != string::npos) {
        ++occurrences;
        pos += c.length();
    }
    return occurrences;
}

int main()
{
    ifstream infile;
    if (infile.fail())
    {
        cout << "file cannot be read.";
    }
    else
    {

    }
    string input ;
    cout << "Please enter a string.\n";
    getline (cin, input);
    cout << count(input, "cat");
    
}