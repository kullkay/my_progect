
#include <fstream>

#include <iostream>
#include <string>
#include <filesystem>

using namespace std;
const string path = "C:\\Users\\Andrew\\Desktop\\цели\\дневнк";
int main()
{
    setlocale(LC_ALL, "rus");
    
    

    for (const auto& path_to_file : filesystem::directory_iterator(path))
    {
        ifstream file(path_to_file.path().string());
        char s[255];
        file.getline(s, 255, '\n');
        cout << s <<endl;
    }
}


