/*
Class: CPSC122-01
Name: Jordan Maddox
GU Username: jmaddox
File Name: project1.cpp
Description of Program: 
program generates prime numbers and writes it to a file
To Build: g++ program1.cpp 
To Execute: ./a.out/program1.cpp
*/

//set up
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//function definitions
bool is_prime(int);
void write(int, int);

int main (int argc, char* argv[]){
	
	int x, y;
	
	//asking user how many prime numbers to display
	cout << endl << "Please state the number of prime numbers to be generated: ";
	cin >> x;
	
	cout << endl;
	
	cout << "Please state the number of columns to be displayed: ";
	cin >> y;
	
	/*
	//open output file
	ifstream fin;
	ofstream fout;
	
	if (argv != 3){
	
		cout << "Error! Too many command line arguements entered." << endl;
		exit(1);
	}
	
	fout.open(argv [2]);
	*/
	ofstream fout;
	fout.open("prime_numbers.txt");
	
	//determine what to write to the output file
	write(x, y);
	
	//close output file
	fout.close();
	
	return 0;

}

bool is_prime(int num){

	int i=2;

	//one is not prime
	if (num <= 1){
		return false;
	}
	
	while (i*i <= num){
		
		//checks to see if theres a remainder and if so, it's not a prime number
		if (num % i == 0){
			return false;
		}
		
		i += 1;
	}
	
	return true;
	
}

void write(int n, int cols){
	
	int ct = 0;
	int m = 1;
	bool prime;
	
	ofstream fout;
	
	cout << "Opening File..." << endl;
	
	while (ct < n){
		
		prime = is_prime(m);
		
		if (prime == true){
	
			fout << m << '\t'; //next column
		
			ct = ct + 1;
			n = n - 1;
		
		}
		
		if (ct % cols == cols - 1){
		
			cout << endl;
		
		}
		
		m = m + 1;
	
	}
	
	fout << endl << endl << "Completed...";
	
	cout << "Closing File..." << endl;
	
}

