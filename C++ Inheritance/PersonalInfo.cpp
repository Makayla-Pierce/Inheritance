#include "PersonalInfo.h"
using namespace std;
void PersonalInfo::setFirstName(string nameIn)
{
    firstName = nameIn;
}

void PersonalInfo::setLastName(string nameIn)
{
    lastName = nameIn;
}

void PersonalInfo::setAge(unsigned ageIn)
{
    age = ageIn;
}

void PersonalInfo::setTelephone(string phoneIn)
{
    phoneNum = phoneIn;
}

string PersonalInfo::getFirstName()const
{
    return firstName;
}

string PersonalInfo::getLastName()const
{
    return lastName;
}

unsigned PersonalInfo::getAge()const
{
    return age;
}

string PersonalInfo::getTelephone()const
{
    return phoneNum;
}