#include "Person.h"
using namespace std;

void Person::setFirstName(string nameIn)
{
	info.setFirstName(nameIn);
}

void Person::setLastName(string nameIn)
{
	info.setLastName(nameIn);
}

void Person::setAge(unsigned ageIn)
{
	info.setAge(ageIn);
}

void Person::setTelephone(string phoneIn)
{
    info.setTelephone(phoneIn);
}

void Person::setEmail(string emailIn)
{
    employer.setEmail(emailIn);
}

// overload Person object so it will be easy to print
ostream & operator<<(ostream & os, const Person & person)
{
    os  << "First Name : " << person.getFirstName() << endl
	<< "Last Name  : " << person.getLastName() << endl
	<< "Age        : " << person.getAge() << endl
	<< "Telephone  : " << person.getTelephone() << endl;

    if (person.getEmail() == "") 
    {
	os << "";
    }
    else 
    {
	os << "Email     : " << person.getEmail();
    }	
    os<< endl;
    return os;
}
