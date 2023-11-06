/*
 *      Author: MaksiKutrolli
 */

#ifndef PERSON_H
#define PERSON_H

#include <iostream>

#include "Date.h"
class Person {
private:
    std::string name; // composition: member object
    Date birthdate; // composition: member object
public:
    Person();
    Person(std::string name, Date birthdate);
    std::string getName();
    Date getBirthdate();
    void display();
};

#endif
