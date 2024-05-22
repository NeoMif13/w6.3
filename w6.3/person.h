#pragma once


#include <string>
using namespace std;
class Person {
protected:
    string fullName;

public:
    Person(const string& name) : fullName(name) {}


    virtual void print() const = 0;
    virtual string getType() const = 0;
    virtual string serialize() const = 0;

    virtual ~Person() {}
};
