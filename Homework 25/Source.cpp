#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
bool palindr(std::string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = std::tolower(str[i]);
	std::string tmp1;
	std::string tmp2;
	if (str.length() % 2 != 0) {
		tmp1 = str.substr(0, str.length() / 2);
		tmp2 = str.substr(str.length() / 2 + 1);
	}
	else {
		tmp1 = str.substr(0, str.length() / 2);
		tmp2 = str.substr(str.length() / 2);
	}
	for (int i = 0; i < tmp1.length(); i++)
		if (tmp1[i] != tmp2[tmp2.length() - i-1])
			return false;
	
	return true;
}
int pnctuat(std::string str) {
	int counter = 0;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == '.' || str[i] == ',' || str[i] == '?' || str[i] == '!' || str[i] == ' ')
			counter++;
	return counter;
}
std::string sym_substr(std::string str, char sym) {
	return str.substr(str.rfind(sym));
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//Task 1
	
	std::string str="Hello world!\n";
	std::cout << str;
	char sym;
	std::cout << "Задача 1.\nВведите символ ->";
	std::cin >> sym;
	std::string new_str;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			new_str += sym;
	std::cout << new_str<<std::endl;
	
	//Task 2
	
	std::string str1 = "OaoAo";
	std::cout << "Задача 2.\n" << str1<<"\n";
	if (palindr(str1)==1)
		std::cout << str1 << " - палиндром";
	else
		std::cout << str1 << " - не палиндром";
		
	//Task 3
	
	std::string str2 = "Hello, my dear friend!!!How are you?Im fine.";
	std::cout << "\nЗадача 3.\n" << str2 << "\n";
	std::cout << pnctuat(str2)<<"\n";
	
	//Task 4
	std::string str3 = "hello world!";
	std::cout << "Задача 4\n" << str3 << "\n";
	std::cout << sym_substr(str3, 'o');
	return 0;
}