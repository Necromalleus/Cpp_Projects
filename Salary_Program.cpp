#include <iostream>

using namespace std;

int main() {

	int id;
	double hours;
	double rate;
	double gross;

	cout << "--------------------Employee Salary Records--------------------" << endl;

	cout << "Input Employee ID Number: ";
	cin >> id;

	cout << "Input Number Of Hours Worked: ";
	cin >> hours;

	cout << "Input Rate Per Hour: ";
	cin >> rate;

	gross = hours * rate;

	cout << "Gross Salary: " << gross << " / week" << endl;

	cout << "----------------------------------------------------------------" << endl;


	system("pause");
}
