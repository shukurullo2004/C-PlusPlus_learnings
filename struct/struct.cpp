#include <iostream>
#include <string>

using namespace std;

struct data {
	int year;
	int month;
	int day;
};

int main() {
	struct data Student;
	cout << "Enter your date of birth: " << endl;
	cout << "\n-Year: ";
	cin >> Student.year;
	cout << "\n-Month: ";
	cin >> Student.month;
	cout << "\n-Day: ";
	cin >> Student.day;

	string mont;
	switch (Student.month) {	
		case 1:
			mont = "January,";
			break;
		case 2:
			mont = "February,";
			break;
		case 3:
			mont = "March,";
			break;
		case 4:
			mont = "April,";
			break;
		case 5:
			mont = "May,";
			break;
		case 6:
			mont = "June,";
			break;
		case 7:
			mont = "July";
			break;
		case 8:
			mont = "August,";
			break;
		case 9:
			mont = "September,";
			break;
		case 10:
			mont = "October,";
			break;
		case 11:
			mont = "November,";
			break;
		case 12:
			mont = "December,";
			break;
		default:
			mont = "Invalid month,";
			break;
	}

	cout << "Your DoB: " << mont << " " << Student.day << " " << Student.year << endl;
	return 0;
}
