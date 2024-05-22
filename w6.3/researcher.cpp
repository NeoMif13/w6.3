#include "researcher.h"
#include <iostream>

Researcher::Researcher(const string& name, const string& deg, const string& contract)
    : Person(name), degree(deg), contractNumber(contract) {}


void Researcher::print() const
{
    cout << "Person: " << fullName << endl;
    cout << "Researcher: " << fullName << endl;
    cout << "Degree: " << degree << endl;
    cout << "Contract Number: " << contractNumber << endl;
}
string Researcher::serialize() const {
    return fullName + " " + getType() + " " + degree + " " + contractNumber;
}