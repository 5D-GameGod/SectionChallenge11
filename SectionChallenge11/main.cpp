#include<iostream>
#include<vector>

void DisplayMenu();
void GetChoice();

char Choice{};

int main()
{
	DisplayMenu();
	return 0;
}

void DisplayMenu()
{
	do 
	{
		std::cout << "\nChoose which action you want to perform." << std::endl;
		std::cout << "\nP - Print numbers." << std::endl;
		std::cout << "A - Add a number." << std::endl;
		std::cout << "M - Display mean of the numbers." << std::endl;
		std::cout << "S - Display the smallest number." << std::endl;
		std::cout << "L - Display the largest number." << std::endl;
		std::cout << "Q - Quit program." << std::endl;
		std::cout << "\nEnter your choice: ";

		GetChoice();
	}
	while (Choice != 'Q' && Choice != 'q');
}

void GetChoice()
{
	std::cin >> Choice;
}