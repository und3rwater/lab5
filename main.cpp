#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> ReadFile(const string& filename) // считывание из файла набор строк в вектор функция № 1
{
    vector<string> lines;
    return lines;
}

void DisplayFile(const vector<string>& lines) // вывод строк на экран (функция № 2)
{
    /*
    vector<string> tLines =
    {
        "FIRST",
        "SECOND",
        "THIRD",
        " ",
        "LAST"
    };

    for (auto& line : tLines)
    {
        cout << line << endl;
    }
*/

    for (auto& line : lines)
    {
        cout << line << endl;
    }
}

void FileOut(const vector<string>& lines, const string& filename) // запись в файл (функция № 3)
{
    /*
    vector<string> tData =
    {
        "FIRST!",
        "SECOND!",
        "THIRD!",
        " ",
        "LAST!"
    };
    */

    ofstream out(filename);
    if(!out)
    {
        cout << "error" << endl;
        return;
    }

    /*
    for (const auto& line : tData)
    {
        out << line << endl;
    }
    */

    for (const auto& line : lines)
    {
        out << line << endl;
    }
    out.close();
}

int main()
{
    setlocale(LC_ALL, "Russian");

    vector<string> lines = ReadFile("input.txt");
    DisplayFile(lines);
    FileOut(lines, "output.txt");

    return 0;
}
