#include <stdexcept>
#include "People.h"
using namespace std;

void People::addPersons()
{
    int entries = 0;
    cout << "How many records do you want to input?: ";
    cin >> entries;
    while (entries < 10) 
    {
	cout << "You must input at least 10 records. Please input a bigger value.\n";
	cin >> entries;
    }
    
    cin.get();
    string temp;
    Person tmpPerson;
    for (int i = 0; i< entries; i++) 
    {
        cout << endl << "Enter data for person #" << 1 + i << endl;
	cout << "What is the first name? ";
	getline(cin, temp);
	tmpPerson.setFirstName(temp);
	cout << "What is the last name? ";
	getline(cin, temp);
	tmpPerson.setLastName(temp);
	cout << "What is the age? ";
	getline(cin, temp);
	tmpPerson.setAge(stoi(temp));
	cout << "What is the telephone number? ";
	getline(cin, temp);
	tmpPerson.setTelephone(temp);
	cout << "What is your email? ";
	getline(cin, temp);
	tmpPerson.setEmail(temp);
	persons.push_back(tmpPerson);
	++count; // increment count
	cout << endl;
    }
}

void People::showPersons()
{
    if (count == 0) 
    {
	cout << "There are no entries yet!" << endl;
    }
    else 
    {
	cout << "Person on record : " << count << endl;
	cout << "------------------------------------" << endl;
	for (auto &person : persons) 
        {
            cout << person << endl;
	}
    }
}
void People::menu()
{
    bool again = true;
    do 
    {
	int choice = 0;
	cout << "---Main Menu---\n";
	cout << "1. Input information\n";
	cout << "2. Display records\n";
	cout << "3. Exit\n";
	cout << "Your choice : ";
	try
        {
            cin >> choice;
            if(!(choice>=1 && choice<=3))
            {
                throw out_of_range("Your choice is out of range.");
            }
        }
        catch(out_of_range&)
        {
            cerr << "An error occurred. Please enter a valid menu number.\n";
            cin >> choice;
        }

	cin.get();
	switch (choice)
        {
	case 1:
            addPersons();
            again = true;
            break;
	case 2:
            showPersons();
            again = true;
            break;
        case 3:
            cout << "Exiting program..." << endl;
            again = false;
            break;
        }
    } while(again);
}