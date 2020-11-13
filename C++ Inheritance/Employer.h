#ifndef EMPLOYER_H
#define EMPLOYER_H
#include "PersonalInfo.h"
using namespace std;

class Employer
{
private:
   string email;
   PersonalInfo pers;
public:
    Employer(){}

    Employer(string fnameIn, string lnameIn, unsigned ageIn, string phoneIn)
	:pers(fnameIn, lnameIn, ageIn, phoneIn){}
	// take note of this one! It will be used in Person
    Employer(string fnameIn, string lnameIn, unsigned ageIn, string phoneIn, string mail)
	:pers(fnameIn, lnameIn, ageIn, phoneIn), email{ mail } {}
        
    //set functions           
    void setEmail(string emailIn);
    
    //get functions
    string getEmail()const;
};

#endif /* EMPLOYER_H */  