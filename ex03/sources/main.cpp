#include "Intern.hpp"

int main() {
	Intern someRandomIntern;
	AForm* form;

	form = someRandomIntern.makeForm("robotomy request", "Bender");
	if (form)
		delete form;

	form = someRandomIntern.makeForm("invalid form", "TargetX");
	if (form)
		delete form;

	return 0;
}
