#include <iostream>
#include <string>
#include <fstream>
using namespace std;
bool palindrom(const string& s)
{
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
            return false;
    return true;
}
bool simChars(const string& s)
{
    for (int i = 1; i < s.size(); i++)
        if (s[i - 1] != s[i])
            return false;
    return true;
}

int main()
{       ifstream fin;
        ofstream foutPal, foutSim;
        string fileIn, fileOut;
    try {
        cout << "Name of input file: ";
        getline(cin, fileIn);
        cout << "Name of file with palindroms: ";
        getline(cin, fileOut);
        foutPal.open(fileOut);
        cout << "Name of file with strings with similar characters: ";
        getline(cin, fileOut);
        foutSim.open(fileOut);
        fin.open(fileIn);

            if ((!fin.is_open() || !foutPal.is_open()) || !foutSim.is_open())
                throw string("smth went wrong");
            fin.peek();
            if (fin.eof())
                throw string("end of file!");
        }
        catch(const string& s){
            cout << s;
            fin.close();
            foutPal.close();
            foutSim.close();
            return 1;
        }
        string s;
        while (!fin.eof())
        {
            getline(fin, s);
            if (simChars(s))
            {
                foutPal << s << '\n';
                foutSim << s << '\n';
            }
            else if (palindrom(s))
                foutPal << s << '\n';
        }
        fin.close();
            foutPal.close();
            foutSim.close();
}
