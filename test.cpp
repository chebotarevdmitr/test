#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 int main() {
	  fstream my_file;
	/*my_file.open("Dima.txt", ios::out);// -> write записываем данные в файл
	if (my_file.is_open()) {
		my_file << "Hello boy\n";
		my_file << "This is second line\n";
		my_file.close();
	}
	my_file.open("Dima.txt", ios::app);// -> append добавляем данные в файл
	if (my_file.is_open()) {
		my_file << "Hello 2\n";
		my_file.close();
	}
	*/
	  my_file.open("Dima.txt", ios::in);//-> read режим чтения
	  if (my_file.is_open()) {
		  string line;
		  while (getline(my_file,line)) {     // -> ф-ция из библ string (получить строку)
			  cout << line << endl;

		  }
		  my_file.close();
	  }


	system("pause>0");
}
