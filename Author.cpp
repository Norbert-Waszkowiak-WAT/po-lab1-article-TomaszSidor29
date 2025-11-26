#include "Author.h"

Author::Author(string firstName, string lastName)
	:name(firstName), surname(lastName) {
}
void Author::print() {
	cout << name << " " << surname << endl;
}
string Author::toString() {
	return name + " " + surname;
}
string Author::getName() { 
	return name; 
}
string Author::getSurname() { 
	return surname; 
}