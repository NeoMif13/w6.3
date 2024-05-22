#pragma once

#include "person.h"
#include <string>
using namespace std;

class Teacher : public Person {
private:
    string position;
    string academicDegree;

public:
    Teacher(const string& name, const string& pos, const string& degree);


    void print() const override;
    string getType() const override { return "Teacher"; }
    string serialize() const override;
    virtual ~Teacher() {}
};