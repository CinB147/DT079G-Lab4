#include "MailBox.h"

#include <iostream>
#include <algorithm>


std::vector<Email> MailBox::Mailbox() {
	return mailbox;
}

void MailBox::push(const Email& inbox) {
	mailbox.push_back(inbox);
}

size_t MailBox::size() {
	return mailbox.size();
}

auto MailBox::begin() {
	return mailbox.begin();
}

auto MailBox::end() {
	return mailbox.end();

}

void MailBox::SortPerson() {
	std::sort(mailbox.begin(), mailbox.end(), CompWhoDateSubject()); //sort random access_it 
}

void MailBox::SortDate() {
	std::sort(mailbox.begin(), mailbox.end(), CompDateWhoSubject());
}

void MailBox::SortSubject() {
	std::sort(mailbox.begin(), mailbox.end(), CompSubjectWhoDate());
}

