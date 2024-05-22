#pragma once


#include "person.h"
#include <string>
using namespace std;

class SupportStaff : public Person {
private:
    string position;
    int labNumber;

public:
    SupportStaff(const string& name, const string& pos, int lab);


    void print() const override;
    string getType() const override { return "SupportStaff"; }
    string serialize() const override;
    virtual ~SupportStaff() {}
};
