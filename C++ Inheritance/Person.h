#ifndef PERSON_H
#define PERSON_H
#include "PersonalInfo.h"
#include "Employer.h"
using namespace std;
class Person
{
private:
    PersonalInfo info;
    Employer employer;
public:
    Person(){}
    Person(string fnameIn, string lnameIn, unsigned ageIn, string phoneIn)
	:info(fnameIn, lnameIn, ageIn, phoneIn){}
	
    Person(string fnameIn, string lnameIn, unsigned ageIn, string phoneIn, string email)
	:employer(fnameIn, lnameIn, ageIn, phoneIn, email) {}

    //set functions
    void setFirstName(string nameIn);
    void setLastName(string nameIn);
    void setAge(unsigned ageIn);
    void setTelephone(string phoneIn);
    void setEmail(string emailIn);

    //get functions
    string getFirstName()const { return info.getFirstName(); }
    string getLastName()const { return info.getLastName(); }
    unsigned getAge() const { return info.getAge(); }
    string getTelephone()const { return info.getTelephone(); }
    string getEmail()const { return employer.getEmail(); }
};
ostream &operator<<(ostream &os, const Person &person);
#endif /* PERSON_H */  

