#ifndef PERSONALINFO_H
#define PERSONALINFO_H

#include <iostream>
#include <string>
using namespace std;
class PersonalInfo
{
private:
    string firstName;
    string lastName;
    unsigned age;
    string phoneNum;
public:
    PersonalInfo(){}
    PersonalInfo(string fnameIn, string lnameIn, unsigned ageIn, string phoneIn)
	:firstName(fnameIn), lastName(lnameIn), age(ageIn), phoneNum(phoneIn){}
    
    //set functions
    void setFirstName(string nameIn);
    void setLastName(string nameIn);
    void setAge(unsigned ageIn);
    void setTelephone(string phoneIn);
    
    //get functions
    string getFirstName()const;
    string getLastName()const;
    unsigned getAge()const;
    string getTelephone()const;
};

#endif /* PERSONALINFO_H */  