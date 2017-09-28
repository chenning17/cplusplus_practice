//problem 1 from http://www.shiftedup.com/2015/05/07/five-programming-problems-every-software-engineer-should-be-able-to-solve-in-less-than-1-hour

#include <iostream>

int sumFor(int list[], int size){

	std::cout << "for\n";
	int sum = 0;

	for(int i=0; i<size; i++){
		sum+=list[i];		
	}
	return sum;
}



int sumWhile(int list[], int size){

	std::cout << "while\n";
	int sum = 0;
	int i = 0;
	while(i < size){
	sum+=list[i];
	i++;
	}
	return sum;
}


//uses a variable length array, which is not allowed in standard c++ but is allowed in g++ (GNU c++)
int sumRecur(int list[], int size){

	std::cout << "recur\n";
	int sum = list[size-1];
	int copyList[size-1];

	if(size > 1){
		for(int i=0; i<size-1; i++){
			copyList[i] = list[i];
		}
		return sum + sumRecur(copyList, size-1);		
	}
	else{ 
		return sum;
	}
}

int main(){
	int length = 5;
	int testList[length];

	for(int i = 0; i < length; i++){
		testList[i] = i*2;
	}

	std::cout << "for sum is " << sumFor(testList, length) << "\n";
	std::cout << "while sum is " << sumWhile(testList, length) << "\n";
	std::cout << "recursion sum is " << sumRecur(testList, length) << "\n";

	return(0);
}
