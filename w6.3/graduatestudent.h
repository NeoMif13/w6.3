#pragma once

#include <string>
#include "person.h"
using namespace std;

class GraduateStudent : public Person {
private:
    int graduationYear;
    long studentID;
    double averageScore;

public:
    GraduateStudent(const string& name, int year, long id, double score);


    void print() const override;
    string getType() const override { return "GraduateStudent"; }
    string serialize() const override;
    virtual ~GraduateStudent() {}
};
