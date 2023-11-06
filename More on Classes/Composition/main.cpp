/*
 *      Author: MaksiKutrolli
 */

#include <iostream>
//#include "Date.h"
#include "Person.h"

int main() {
    Date birthdate(10, 5, 1990);
    Person person("John John", birthdate);

    person.display();

    return 0;
}
