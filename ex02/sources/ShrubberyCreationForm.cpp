#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	std::ofstream file(target + "_shrubbery");
	file << "      /\\\\\n     /\\  \\\n    /\\    \\\n   /\\\\\\\\\\\n     ||||" << std::endl;
	file.close();
}
