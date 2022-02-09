#include<iostream>
#include<vector>

void DisplayMenu();
void GetChoice();
void PrintNumbers();


char Choice{};

int main()
{
	std::vector<int> NumberList;
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

	if (Choice == 'P' || Choice == 'p')
	{
		PrintNumbers();
	}

	/*else if (Choice == 'A' || Choice == 'a')
	{
		AddNumbers();
	}
	else if (Choice == 'M' || Choice == 'm')
	{
		CalculateMean();
	}
	else if (Choice == 'S' || Choice == 's')
	{
		DetermineSmallest();
	}
	else if (Choice == 'L' || Choice == 'l')
	{
		DetermineLargest();
	}*/
	else if (Choice == 'Q' || Choice == 'q')
	{
		std::cout << "Goodbye";
	}
	else
		std::cout << "***Unknown selection, please try again***" << std::endl;
}

void PrintNumbers()
{
	if(NumberList.length != 0)
	{

	}
	std::cout << "[] - the list is empty." << std::endl;
}