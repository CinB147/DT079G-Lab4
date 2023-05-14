#include "Email.h"
#include <iostream>
#include <string>

Email::Email(std::string person, std::string date, std::string subject) : person(person), date(date), subject(subject){

}

std::ostream& operator<<(std::ostream& os, Email& mail) {
	os <<"Name: " << mail.person << " \t" << "Date: " << mail.date << " \t" << "Subject : " << mail.subject << "\n";
	return os;
}

