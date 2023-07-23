#include <iostream>
#include <fstream>
using namespace std;

 int main() {
	  fstream my_file;
	my_file.open("Dima.txt", ios::out);// -> write записываем данные в файл
	if (my_file.is_open()) {
		my_file << "Hello boy\n";
		my_file << "This is second line\n";
		my_file.close();
	}
	my_file.open("Dima.txt", ios::app);// ->  записываем данные в файл
	if (my_file.is_open()) {
		my_file << "Hello 2\n";
		my_file.close();
	}


	system("pause>0");
}
