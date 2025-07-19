#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("RobotomyRequestForm", 72, 45), target(target) {
	srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	std::cout << "* drilling noises *\n";
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed on " << target << std::endl;
}