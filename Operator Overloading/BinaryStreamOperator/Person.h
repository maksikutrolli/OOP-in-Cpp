
/*
 *      Author: MaksiKutrolli
 */


#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a);

    Person();

    // Friend function for stream insertion operator
    friend std::ostream& operator<<(std::ostream& os, const Person& person);

    // Friend function for stream extraction operator
    friend std::istream& operator>>(std::istream& is, Person& person);
};

#endif
