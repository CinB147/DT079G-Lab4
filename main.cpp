#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Email.h"
#include "MailBox.h"



void Show(const std::vector<Email> &mails) {
	for (auto e : mails) {
		std::cout << e;
	}
}

   

int main() {

	MailBox email;
	Email mail1("Jonathan", "2022-01-01", "Movie");
	Email mail2("Alice", "2022-03-16", "New candy shop");
	Email mail3("Rey", "2021-12-21", "Req Teater");
	Email mail4("Ozzy", "2022-02-17", "Hello");
	Email mail5("Sunny", "2018-07-04", "Lab Rapport");


	email.push(mail1);
	email.push(mail2);
	email.push(mail3);
	email.push(mail4);
	email.push(mail5);

	while (true) {

		int option;
		
		std::cout << "-----Hello! Welcome to mailbox!-----\n" ;
		std::cout << "Enter 1 : Show mailbox sort by name\n";
		std::cout << "Enter 2 : Show mailbox sort by date\n";
		std::cout << "Enter 3 : Show mailbox sort by subject\n";
		std::cout << "Enter 4 : EXIT \n";
		std::cout << "Enter (1-4): ";
		std::cin >> option;

		switch (option)
		{
		case 1: {
			system("cls");
			std::cout << "| \t Welcome to mail box\t\t |\n";
			std::cout << "| \t Show mailbox sort by name\t |\n";
			email.SortPerson();
			Show(email.Mailbox());
			break;
		}
		case 2: {
			system("cls");
			std::cout << "| \t Welcome to mail box\t\t |\n";
			std::cout << "| \t Show mailbox sort by date\t |\n";
			email.SortDate();
			Show(email.Mailbox());
			break;
		}
		case 3: {
			system("cls");
			std::cout << "| \t Welcome to mail box\t\t |\n";
			std::cout << "| \t Show mailbox sort by subject\t |\n";
			email.SortSubject();
			Show(email.Mailbox());
			break;
		}

		case 4: {
			exit(1);
			break;
		}
		default:
		{
			std::cout << "Error! Invalid Input!\n";
		}
		}

	}
	
	
	return 0;
}