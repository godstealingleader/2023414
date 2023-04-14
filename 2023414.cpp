#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string Frist_name, Last_name;
	//int F_size = sizeof(Frist_name), L_size = sizeof(Last_name);
	int age = 0; char grade = 0;
	cout << "What is your frist name?";getline(cin,Frist_name);
	cout << "What is your last name?"; getline(cin, Last_name);
	cout << "What letter grade do you deserve?"; cin >> grade;
	cout << "What is your age?"; cin >> age;
	cout << "Name:" << Last_name << ", " << Frist_name << endl;
	cout << "Grade:" << (char)(grade + 1) << endl;
	cout << "Age:" << age << endl;
	return 0;
}