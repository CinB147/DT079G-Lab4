#pragma once
#ifndef MAILBOX_H
#define MAILBOX_H

#include "Email.h"
#include <vector>

class MailBox
{
public:
	
	std::vector<Email> Mailbox();
	void push(const Email& inbox);
	size_t size();
	auto begin();
	auto end();
	void SortPerson();
	void SortDate();
	void SortSubject();


private:
	std::vector<Email>mailbox;
};

#endif // !MAILBOX_H


