#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern& other) {
	(void)other;
}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(const std::string& name, const std::string& target) {
	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm* (*formCreators[3])(const std::string&) = {
		[](const std::string& target) -> AForm* { return new ShrubberyCreationForm(target); },
		[](const std::string& target) -> AForm* { return new RobotomyRequestForm(target); },
		[](const std::string& target) -> AForm* { return new PresidentialPardonForm(target); }
	};

	for (int i = 0; i < 3; i++) {
		if (name == formNames[i]) {
			std::cout << "Intern creates " << name << std::endl;
			return formCreators[i](target);
		}
	}

	std::cout << "Intern couldn't find the form \"" << name << "\"" << std::endl;
	return NULL;
}
