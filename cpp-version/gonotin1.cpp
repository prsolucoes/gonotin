/*
AUTHOR: PAULO COUTINHO
DESCRIPTION: Using std::set
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(int argc, char *argv[])
{
    // get data from file A
    std::set<string> dataA;
    ifstream streamA;

    streamA.open(argv[1]);

    while(!streamA.eof())
    {
        string line;
        streamA >> line;
        dataA.insert(line);
    }

    streamA.close();

    // get data from file B
    std::set<string> dataB;
    ifstream streamB;

    streamB.open(argv[2]);

    while(!streamB.eof())
    {
        string line;
        streamB >> line;
        dataB.insert(line);
    }

    streamB.close();

    // process data
    for(string value : dataA)
    {
        auto search = dataB.find(value);

        if (search == dataB.end())
        {
            printf("%s\n", value.c_str());
        }
    }
}
