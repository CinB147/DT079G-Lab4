#pragma once
#ifndef EMAIL_H
#define EMAIL_H
#include <iostream>
#include <string>

class Email
{
public:
	Email(std::string person, std::string date, std::string subject);

	friend std::ostream& operator<<(std::ostream& os, Email& rhs);

	friend struct CompDateWhoSubject;
	friend struct CompWhoDateSubject;
	friend struct CompSubjectWhoDate;

private:
	std::string person;
	std::string date;
	std::string subject;

};

struct CompWhoDateSubject
{
	auto operator()(const Email& lhs, const Email& rhs) {
		if (lhs.person != rhs.person) {
			return lhs.person < rhs.person;
		}
		if (lhs.date != rhs.date) {
			return lhs.date < rhs.date;
		}
		return lhs.subject < rhs.subject;

	}
};

struct CompDateWhoSubject
{
	auto operator()(const Email& lhs, const Email& rhs) {
		if (lhs.date != rhs.date) {
			return lhs.date < rhs.date;
		}
		if (lhs.person != rhs.person) {
			return lhs.person < rhs.person;
		}
		return lhs.subject < rhs.subject;

	}
};

struct CompSubjectWhoDate
{
	auto operator()(const Email& lhs, const Email& rhs) {
		if (lhs.subject != rhs.subject) {
			return lhs.subject < rhs.subject;
		}
		if (lhs.person != rhs.person) {
			return lhs.person < rhs.person;
		}
		return lhs.date < rhs.date;

	}
};

#endif // !EMAIL_H


