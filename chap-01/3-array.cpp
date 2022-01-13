#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv)
{
    using namespace std;

    if (argc == 1)
    {
        cerr << "Veuillez préciser une taille de tableau." << endl;
        return -1;
    }

    int         length = stoi(argv[1]);
    vector<int> array;

    cout << "Taille du tableau : " << argv[1] << endl;

    for (int i = 0; i < length; i++)
    {
        array.emplace_back(i + 1);
    }

    for (int value : array)
    {
        cout << value << endl;
    }

    return 0;
}
