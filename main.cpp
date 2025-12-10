#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> ReadFile(const string& filename) // считывание из файла набор строк в вектор функция № 1
{
    ifstream file(filename);
    vector<string> lines;
    if(!file)
    {
        cout << "Error" << endl;
        return lines;
    }
    string line;
    while(getline(file, line))
    {
        lines.push_back(line);
    }
    file.close();

/*
    cout << lines.size() << endl;
    for(size_t i = 0; i < lines.size(); i++)
        {
            cout << "stroka " << i+1 << ": " << lines[i] << endl;
        }
*/

    return lines;
}


void DisplayFile(const vector<string>& lines) // вывод строк на экран (функция № 2)
{

}

void FileOut(const vector<string>& lines, const string& filename) // запись в файл (функция № 3)
{

}

int main()
{
    setlocale(LC_ALL, "Russian");

    vector<string> lines = ReadFile("input.txt");
    DisplayFile(lines);
    FileOut(lines, "output.txt");

    return 0;
}
