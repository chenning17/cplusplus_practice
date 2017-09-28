// writing on a text file
#include <iostream>
#include <fstream>

//plots very simple x^2 data to file, can be plotted using gnuplot.

int main () {
  std::ofstream myfile ("plot.txt");
  if (myfile.is_open())
  {

	for(int i=-20; i<= 20; i++){
 		myfile << i << " " << i*i << "\n";
	}

  myfile.close();
  }
  else std::cout << "Unable to open file\n";
  return 0;
}	
