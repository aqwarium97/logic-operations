#include <iostream>

int main()
{
	std::cout << "Operator: ||" << std::endl;

	int variable1{ 1 };  // True
	int variable2{ 0 };  // False

	std::cout << std::boolalpha;

	std::cout << static_cast<bool>(variable1) << "   ";
	std::cout << static_cast<bool>(!variable2) << "   ";
	std::cout << (variable1 || variable2) << std::endl;    // True || !(False) => True || True = True

	std::cout << static_cast<bool>(!variable1) << "   ";
	std::cout << static_cast<bool>(!variable2) << "   ";
	std::cout << (variable1 || variable2) << std::endl;    // !True || !False => False || True = True

	std::cout << static_cast<bool>(variable1) << "   ";
	std::cout << static_cast<bool>(variable2) << "   ";
	std::cout << (variable1 || variable2) << std::endl;    // True || False = True

	std::cout << static_cast<bool>(!variable1) << "   ";
	std::cout << static_cast<bool>(variable2) << "   ";
	std::cout << (!variable1 || variable2) << std::endl;

	std::cout << "\n";

	std::cout << "Operator &&" << std::endl;
	int variable3{ 1 };
	int variable4{ 1 };
	std::cout << static_cast<bool>(variable3) << "   ";
	std::cout << static_cast<bool>(variable4) << "   ";
	std::cout << (variable3 && variable4) << std::endl;    // True && True = True

	std::cout << static_cast<bool>(!variable3) << "   ";
	std::cout << static_cast<bool>(variable4) << "   ";
	std::cout <<  (!variable3 && variable4) << std::endl;  // !True && True => False && True = False

	std::cout << static_cast<bool>(variable3) << "   ";
	std::cout << static_cast<bool>(!variable4) << "   ";
	std::cout << (variable3 && !variable4) << std::endl;  // True && !True => True && False = False

	std::cout << static_cast<bool>(!variable3) << "   ";
	std::cout << static_cast<bool>(!variable4) << "   ";
	std::cout << (!variable3 && !variable4) << std::endl;  // !True && !True => False && False = False

	return EXIT_SUCCESS;
}