
/*
 *      Author: MaksiKutrolli
 */

#include "Person.h"

Person::Person(const std::string& n, int a){
	name =n;
	age = a;
}

Person::Person(){
	name = "";
	age = 0;
}

std::ostream& operator<<(std::ostream& os, const Person& person) {
    os << "Name: " << person.name << ", Age: " << person.age;
    return os;
}

std::istream& operator>>(std::istream& is, Person& person) {
    // Assume input format: "Name Age"
    is >> person.name >> person.age;
    return is;
}
