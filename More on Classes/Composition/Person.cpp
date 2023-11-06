/*
 *      Author: MaksiKutrolli
 */

#include "Person.h"


Person::Person() {
    name = "Full Name";
    Date birthdate;
    this->birthdate = birthdate;
}

Person::Person(std::string name, Date birthdate) {
    this->name = name;
    this->birthdate = birthdate;
}

std::string Person::getName() {
    return name;
}

Date Person::getBirthdate() {
    return birthdate;
}

void Person::display() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Birthdate: ";
    birthdate.display();
}
