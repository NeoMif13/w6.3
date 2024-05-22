#pragma once

#include "researcher.h"
#include "graduatestudent.h"
#include "person.h"
#include "supportstaff.h"
#include "teacher.h"
#include <vector>

using namespace std;


class PersonArray {
private:
    vector<Person*> persons;

public:
    PersonArray() {}

    void addPerson();
    void removePerson(size_t index);
    void printPersons() const;
    void savePersonsToFile();
    void loadPersonsFromFile();
    ~PersonArray()
    {
        for (Person* person : persons)
        {
            delete person;
        }
    }
};
