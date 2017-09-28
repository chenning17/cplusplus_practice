#include <iostream>

int main(){

	std::cout << "Enter number to sum from 1 up to: ";

	int inputValue;
	std::cin >> inputValue;

	int sum = 0;

	for(int i=1; i<= inputValue; i++){
		sum += i;
	}


	std::cout << "\nSum from 1 up to " << inputValue << " is " << sum << "\n"; 

	return(0);
}
