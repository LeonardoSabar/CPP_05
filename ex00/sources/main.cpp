#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat bob("Bob", 151);
	} catch (std::exception& e) {
		std::cout << "Error creating Bureaucrat: " << e.what() << std::endl;
	}

	try {
		Bureaucrat alice("Alice", 2);
		std::cout << alice << std::endl;

		alice.incrementGrade();
		std::cout << alice << std::endl;

		alice.incrementGrade();
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
