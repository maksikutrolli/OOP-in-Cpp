
/*
 *      Author: MaksiKutrolli
 */

#include "FriendClass.h"
#include "MyClass.h"

int main(){

	MyClass obj(3);

	obj.displaySecretValue();

	FriendClass friendObj;

	friendObj.accessMyClass(obj);

	obj.displaySecretValue();


}
