#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main() {
	Bureaucrat b("Alice", 1);
	ShrubberyCreationForm f1("home");
	RobotomyRequestForm f2("Bender");
	PresidentialPardonForm f3("Rick");

	b.signForm(f1);
	b.signForm(f2);
	b.signForm(f3);

	b.executeForm(f1);
	b.executeForm(f2);
	b.executeForm(f3);

	return 0;
}