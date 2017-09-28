// problem 3 from: http://www.shiftedup.com/2015/05/07/five-programming-problems-every-software-engineer-should-be-able-to-solve-in-less-than-1-hour

#include <iostream>
#include <vector>

//dont use this as it is incredibly slow due to recursion!!!

/*
int fibonacciRecur(int n){

// 0,1,1,2,3,5,8,...

    if(n == 1){
    return 0;
    }
    
    else if(n == 2){
        return 1;
    }
    else{
    return fibonacci(n-2) + fibonacci(n-1);
    }
}

int fibonacciSum(int n){
    int sum = 0;
    for(int i =1; i<=n; i++){
        sum += fibonacci(i);
    }
    return sum;
}*/


// fast version below....

std::vector<int> fibonacciArray(int n){

    std::vector<int> fib(n);

    fib[0] = 0;
    fib[1] = 1;

    for(int i =2; i<n; i++){
        fib[i] = fib[i-2] + fib[i-1] ;
    }

    return fib;
    
}

double fibonacciSumArray(std::vector<int> fibs){
    double sum = 0;
    for(int i =0; i < fibs.size(); i++){
        sum += fibs[i];
    }
    return sum;
}



int main(){

    int amountToSum;
    std::cout << "input amount of fibonacci numbers to sum (max possible is ~66): ";
    std::cin >> amountToSum;

    std::vector<int> fibArray = fibonacciArray(amountToSum);
    
    for(int i = 0; i < fibArray.size(); i++){
        std::cout << fibArray[i] << "\n";
    }
    
    std::cout << "first " << amountToSum << " fibonacci numbers summed together is " << fibonacciSumArray(fibArray) <<"\n";
        
        return(0);
}
