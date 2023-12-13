
/*
 *      Author: MaksiKutrolli
 */


#include "Dog.h"

int main(){

	Animal animal;

	animal.eat();
	animal.sleep();

	Dog dog;

	Animal *animalP = new Dog;

	animalP->eat();
	animalP->sleep();
//	animalP->bark();

	dog.eat();
	dog.sleep();

	dog.bark();

}
