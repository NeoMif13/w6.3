#include <iostream>
#include <string>
#include "graduatestudent.h"
#include "teacher.h"
#include "supportstaff.h"
#include "researcher.h"
#include "PersonArray.h"
#include <iostream>
using namespace std;

int main() {
    PersonArray personArray;

    int choice;
    do {
        cout << "1. Add person\n2. Remove person\n3. Print persons\n4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            personArray.addPerson();
            break;
        case 2: {
            size_t index;
            cout << "Enter index of person to remove: ";
            cin >> index;
            cin.ignore();
            personArray.removePerson(index);
            break;
        }
        case 3:
            personArray.printPersons();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
