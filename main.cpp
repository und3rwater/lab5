#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> ReadFile(const string& filename) // ñ÷èòûâàíèå èç ôàéëà íàáîð ñòðîê â âåêòîð ôóíêöèÿ ¹ 1
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

    return lines;
}

void DisplayFile(const vector<string>& lines) // âûâîä ñòðîê íà ýêðàí (ôóíêöèÿ ¹ 2)
{
    for (auto& line : lines)
    {
        cout << line << endl;
    }
}

void FileOut(const vector<string>& lines, const string& filename) // çàïèñü â ôàéë (ôóíêöèÿ ¹ 3)
{
    ofstream out(filename);
    if(!out)
    {
        cout << "error" << endl;
        return;
    }

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
