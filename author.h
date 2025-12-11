#ifndef AUTHOR
#define AUTHOR

#include <iostream>

using namespace std;
class Author{
    private:
    string name;
    string surname;
    public:
    Author(string name,string surname);
    Author();
    void print();
    string toString();
    string getName();
    string getSurname();
    
};
#endif