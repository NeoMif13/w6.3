#include "teacher.h"
#include <iostream>

Teacher::Teacher(const string& name, const string& pos, const string& degree)
    : Person(name), position(pos), academicDegree(degree) {}



void Teacher::print() const
{
    cout << "Person: " << fullName << endl;
    cout << "Teacher: " << fullName << endl;
    cout << "Position: " << position << endl;
    cout << "academicDegree: " << academicDegree << endl;
}

string Teacher::serialize() const {
    return fullName + " " + getType() + " " + position + " " + academicDegree;
}