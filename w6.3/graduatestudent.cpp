#include "graduatestudent.h"
#include <iostream>

GraduateStudent::GraduateStudent(const string& name, int year, long id, double score)
    : Person(name), graduationYear(year), studentID(id), averageScore(score)
{
    while (year < 1900 || year > 2100)
    {
        cout << "1900 - 2100 : ";
        cin >> year;
    }

    string idString;

    while (id < 1 || id >999999999)
    {
        cout << " Enter 9-digit ID: ";
        cin >> id;
    }
    while (score < 0 || score > 100)
    {
        cout << " 0 - 100: ";
        cin >> score;
    }

    graduationYear = year;

    averageScore = score;
}


void GraduateStudent::print() const
{
    cout << "Person: " << fullName << endl;
    cout << "Graduate Student: " << fullName << endl;
    cout << "Graduation Year: " << graduationYear << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Average Score: " << averageScore << endl;
}

string GraduateStudent::serialize() const {
    return fullName + " " + getType() + " " + to_string(graduationYear) + " " + to_string(studentID) + " " + to_string(averageScore);
}