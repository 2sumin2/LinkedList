#include <stdio.h>
#include <iostream>
#include <string>
#include "StringLinkedList.h"

using namespace std;

int main(void) {
	StringLinkedList* list = new StringLinkedList();
	// 1
	list->addFront("MON");
	list->addFront("TUE");
	list->addFront("WED");
	list->addFront("TUR");
	list->print();

	// 2
	list->addFront("FRI");
	list->print();
	
	// 3
	list->removeFront();
	list->print();

	return 0;


}