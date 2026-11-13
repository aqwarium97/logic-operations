#include <iostream>

int main()
{
	int first_user_num{};
	int second_user_num{};

	std::cout << "Enter integer num: ";
	std::cin >> first_user_num;

	std::cout << "Enter integer num: ";
	std::cin >> second_user_num;

	
	if ((first_user_num <= 100 && first_user_num >= 1) && (second_user_num <= 100 && second_user_num >= 1)  && (first_user_num != second_user_num))
	{
		std::string result{ (first_user_num > second_user_num) ? "more" : "less" };
		std::cout << first_user_num << " " << result << " than " << second_user_num << std::endl;
	}
	else if (first_user_num == second_user_num)
	{
		std::cout << first_user_num << " equal " << second_user_num << std::endl;
	}
	else
	{
		std::cout << "Error! One of nums is out of range!" << std::endl;
	}

	return EXIT_SUCCESS;
}