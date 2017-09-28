#include <iostream>

int main(){
	
	std::cout << "Input max number to count up to: ";
	int maxVal;
	std::cin >> maxVal;
	std::cout << "\n";


	for(int i = 1; i<= maxVal; i++){

		if(i%3==0 && i%5==0){
			//fizzbuzz as multiple of both 3 and 5
			std::cout << "fizzbuzz\n";
		}
		else if(i%3==0){
			//fizz, multiple of 3
			std::cout << "fizz\n";
		}	
		else if(i%5==0){
			//buzz, multiple of 5
			std::cout << "buzz\n";	
		}
		else{
			//just print number as not a multiple of 3 or 5
			std::cout << i << "\n";
		}

	}


	return(0);
}
