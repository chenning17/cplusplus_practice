#include <iostream>
#include <iomanip>

int main(){

	std::cout << "Input dimension of multiplication table: ";

	int dimension;

	std::cin >> dimension;

	for(int i=1; i<=dimension; i++){
		for(int j=1; j<= dimension; j++){
			//setw() is used to set the width of the text fields in each case, left aligns them to the left side
			std::cout << std::setw(3) << std::left << i*j << " ";
		}
		std::cout << "\n"; //new line for each new row in table
	}
  

	return(0);
}
