// problem 2 from: http://www.shiftedup.com/2015/05/07/five-programming-problems-every-software-engineer-should-be-able-to-solve-in-less-than-1-hour

#include <iostream>
#include <vector>


std::vector<char> combineLists(std::vector<char> one, std::vector<char> two, int length){
	std::vector<char> both(2*length);

	for(int i=0; i<2*length;i++){
		if(i%2==0){
			// i is even so take element from list one
			both[i] = one[i/2];
		}
		else{
			//i is odd, 1, 3, 5,...so subtract 1 and half it
			both[i] = two[(i-1)/2];
		}
	}

	return both;
}

int main(){

	int size = 5;

char arr1[] = {'a', 'b', 'c', 'd', 'e'};
char arr2[] = {'1', '2', '3', '4', '5'};

std::vector<char> list1 (arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]) );
std::vector<char> list2 (arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]) );
	
std::vector<char> combined = combineLists(list1, list2, size);
	
	for(int i=0; i<2*size; i++){	
		std::cout << combined[i] << " ";
	}
	std::cout << "\n";

	return(0);
}
