#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& name, int sign, int exec)
	: name(name), isSigned(false), gradeToSign(sign), gradeToExecute(exec) {
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
	: name(other.name), isSigned(other.isSigned),
	  gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other)
		isSigned = other.isSigned;
	return *this;
}

AForm::~AForm() {}

const std::string& AForm::getName() const { return name; }
bool AForm::getIsSigned() const { return isSigned; }
int AForm::getGradeToSign() const { return gradeToSign; }
int AForm::getGradeToExecute() const { return gradeToExecute; }

void AForm::beSigned(const Bureaucrat& b) {
	if (b.getGrade() > gradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade too high";
}
const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade too low";
}
const char* AForm::FormNotSignedException::what() const throw() {
	return "Form not signed";
}

std::ostream& operator<<(std::ostream& os, const AForm& f) {
	os << "Form '" << f.getName() << "', signed: " << f.getIsSigned()
	   << ", grade to sign: " << f.getGradeToSign()
	   << ", grade to execute: " << f.getGradeToExecute();
	return os;
}