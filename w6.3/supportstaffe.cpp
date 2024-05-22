#include "supportstaff.h"
#include <iostream>

SupportStaff::SupportStaff(const string& name, const string& pos, int lab)
    : Person(name), position(pos), labNumber(lab) {
    while (lab < 0 || lab > 100)
    {
        cout << " 0 - 100: ";
        cin >> lab;
    }
    labNumber = lab;
}


void SupportStaff::print() const
{
    cout << "Person: " << fullName << endl;
    cout << "Support Staff: " << fullName << endl;
    cout << "Position: " << position << endl;
    cout << "Lab Number: " << labNumber << endl;
}
string SupportStaff::serialize() const {
    return fullName + " " + getType() + " " + position + " " + to_string(labNumber);
}