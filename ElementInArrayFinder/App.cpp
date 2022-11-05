#include <iostream>

int searchArray(int array[], int size, int element);

int main() 
{
	int arraySize;
	int index;
	int myNum;

	do {
		std::cout << "Please enter size of array: " << '\n';
		std::cin >> arraySize;
		std::cin.clear();
		std::cin.ignore(123, '\n');
	} while (!arraySize);

	int *numbers = new int[arraySize];
	int size = sizeof(numbers) / sizeof(numbers[0]);

	do {
		for (int i = 0; i < arraySize; i++) {
			std::cout << "Enter an integer value for Position " << i << " : " << '\n';
			std::cin >> numbers[i];
			std::cin.clear();
			std::cin.ignore(123, '\n');
		}
	} while (!*numbers);

	do {
		std::cout << "Enter integer to find: " << '\n';
		std::cin >> myNum;
		std::cin.clear();
		std::cin.ignore(123, '\n');
	} while (!myNum);
	
	index = searchArray(numbers, size, myNum);

	if (index != -1) {
		std::cout << myNum << " is at index " << index;
	}
	else {
		std::cout << myNum << " is not in array";
	}

	return 0;
}
int searchArray(int array[], int size, int element){
	for (int i = 0; i < size; i++) {
		if (array[i] == element) {
			return i;
		}
	}
	return -1;
}
