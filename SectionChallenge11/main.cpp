#include<iostream>
#include<vector>

void DisplayMenu();
char GetChoice();

void PrintNumbers(const std::vector<int>& v);
void AddNumber(std::vector<int>& v);
//void InputCheck(int& i, std::vector<int>& v);
void CalculateMean(const std::vector<int>& v);
void DetermineSmallest(const std::vector<int>& v);
void DetermineLargest(const std::vector<int>& v);

int main()
{
	std::vector<int> NumberList;
	char Choice{};

	do
	{
		DisplayMenu();
		Choice = GetChoice();

		if (Choice == 'P')
		{
			PrintNumbers(NumberList);
		}
		else if (Choice == 'A')
		{
			//std::cout << "Please enter the number you wish to add to the list: ";
			AddNumber(NumberList);
		}
		else if (Choice == 'M')
		{
			CalculateMean(NumberList);
		}
		else if (Choice == 'S')
		{
			DetermineSmallest(NumberList);
		}
		else if (Choice == 'L')
		{
			DetermineLargest(NumberList);
		}
		else if (Choice == 'Q')
		{
			std::cout << "Goodbye...";
		}
		else
			std::cout << "Unknown option entered. Please try again.\n";
	} while (Choice != 'Q' && Choice != 'q');
	std::cout << std::endl;

	return 0;
}

void DisplayMenu()
{
	std::cout << "P - Print numbers" << std::endl;
	std::cout << "A - Add a number" << std::endl;
	std::cout << "M - Display mean of the numbers" << std::endl;
	std::cout << "S - Display the smallest number" << std::endl;
	std::cout << "L - Display the largest number" << std::endl;
	std::cout << "Q - Quit" << std::endl;

	std::cout << "\nEnter your choice: ";
}

char GetChoice()
{
	char Choice{};
	std::cin >> Choice;
	return toupper(Choice);
}

void PrintNumbers(const std::vector<int>& v)
{
	if (v.size() != 0)
	{
		std::cout << "[";
		for (int i{ 0 }; i < v.size(); i++)
		{
			std::cout << v.at(i) << " ";
		}
		std::cout << "]" << std::endl;
	}
	else
		std::cout << "[] - the list is empty." << std::endl;       
}

void AddNumber(std::vector<int> &v)
{
	std::cout << "Enter the number you wish to add to the list: ";
	int input{};
	std::cin >> input;
	//InputCheck(input,v);
	v.push_back(input);
	std::cout << input << " has been added to the list." << std::endl;
}

//void InputCheck(int &i, std::vector<int> &v)
//{
//	if (isdigit(i) == 1)
//	{
//		std::cout << "Valid Input.\n" << std::endl;
//	}
//	else
//		std::cout << "Invalid Input. Please try again." << std::endl;
//		AddNumber(v);
//} 

void CalculateMean(const std::vector<int> &v)
{
	if (v.size() != 0)
	{
		double Mean{ 0 };
		int sum{ 0 };
		for(auto num:v)
		{
			sum += num;
		}
		Mean = (sum) / v.size();
		std::cout << "The mean is " << Mean << std::endl;
	}
	else
		std::cout << "Unable to calculate mean - the list is empty." << std::endl;
}

void DetermineSmallest(const std::vector<int>& v)
{
	if(v.size() != 0)
	{
		int smallest{ v.at(0) };
		for(int i{0}; i < v.size(); i++)
		{
			if(smallest >= v.at(i))
			{
				smallest = v.at(i);
			}
		}
		std::cout << "The smallest number in the list is " << smallest << std::endl;
	}
	else
		std::cout << "Unable to determine the smallest number - the list is empty." << std::endl;
}

void DetermineLargest(const std::vector<int>& v)
{
	if (v.size() != 0)
	{
		int largest{ v.at(0) };
		for (int i{ 0 }; i < v.size(); i++)
		{
			if (largest <= v.at(i))
			{
				largest = v.at(i);
			}
		}
		std::cout << "The smallest number in the list is " << largest << std::endl;
	}
	else
		std::cout << "Unable to determine the smallest number - the list is empty." << std::endl;
}