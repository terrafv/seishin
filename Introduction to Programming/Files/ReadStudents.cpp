#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("students.txt");

    int numStudents = 0;
    infile >> numStudents;
    infile.ignore();

    string name = "";
    int age = 0;
    string major = "";
    string likedPF1 = "";

    for (int x = 0; x < numStudents; x++)
    {
        getline(infile, name);
        infile >> age;
        infile.ignore();
        getline(infile, major);
        getline(infile, likedPF1);

        cout << name << "\n";
        cout << age << "\n";
        cout << major << "\n";
        cout << likedPF1 << "\n\n";
    }

    infile.close();
    return 0;
}
