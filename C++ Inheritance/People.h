#ifndef PEOPLE_H
#define PEOPLE_H
#include "Person.h"
#include <vector>
using namespace std;

class People
{
private:
    vector<Person> persons;
    int count;
public:
    People() : persons{}, count{ 0 } {}
    ~People() {};

    int getPeopleCount() const { return persons.size(); }
    int getCount() const { count; }
    
    void addPersons();
    void showPersons();
    void menu();
};

#endif // !PEOPLE_H
