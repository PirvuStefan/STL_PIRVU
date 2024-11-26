#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Problem
{
    string name;
    string speciality;
};

struct Doctor
{
    string id;
    string speciality;
    bool used = false;
};

int main()
{
    ifstream inFile("input.txt");

    int n, m;
    inFile >> n;

    vector<Problem> problems(n);
    for (Problem &p : problems)
    {
        inFile >> p.name >> p.speciality;
    }

    inFile >> m;
    vector<Doctor> doctors(m);
    for (Doctor &d : doctors)
    {
        inFile >> d.id >> d.speciality;
    }

    for (const Problem &p : problems)
    {
        bool found = false;
        for ( Doctor &d : doctors)
        {
            if (d.speciality == p.speciality and !d.used )
            {
                d.used = true;
                found = true;
                break;
            }
            
            
            if (found)
                cout << d.id << p.speciality << endl;
        }
    }

    return 0;
}
