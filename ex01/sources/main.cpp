#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat alice("Alice", 50);
	Bureaucrat bob("Bob", 120);

	Form f1("A38", 100, 50);
	Form f2("X9", 20, 10);

	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;

	alice.signForm(f1); 
	bob.signForm(f1); 
	bob.signForm(f2); 

	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;

	return 0;
}
