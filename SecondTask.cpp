#include <iostream>

int main()
{
	int user_num1{};
	std::cout << "Enter your first integer number: ";
	std::cin >> user_num1;

	std::cout << "Enter your second integer number: ";
	int user_num2{};
	std::cin >> user_num2;

	std::cout << "Enter your third integer number: ";
	int user_num3{};
	std::cin >> user_num3;
	std::cout << "\n";

	// Find maximum user num
	int max_num = user_num1 > user_num2
		? (user_num1 > user_num3 ? user_num1 : user_num3)
		: (user_num2 > user_num3 ? user_num2 : user_num3);
	//std::cout << max_num << std::endl; // Check correct output

	// Find minimum user num
	int min_num = user_num1 < user_num2
		? (user_num1 < user_num3 ? user_num1 : user_num3)
		: (user_num2 < user_num3 ? user_num2 : user_num3);
	//std::cout << min_num << std::endl; // Check correct output

	// Find middle num
	int mid_num = (user_num1 != min_num && user_num1 != max_num)
		? user_num1
		: ((user_num2 != min_num && user_num2 != max_num) ? user_num2 : user_num3);
	//std::cout << mid_num << std::endl; // Check correct output
	std::cout << "Result: " << max_num << " " << mid_num << " " << min_num << "\n";

	return EXIT_SUCCESS;
}