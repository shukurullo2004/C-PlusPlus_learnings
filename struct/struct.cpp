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
	cout << "\n-month: ";
	cin >> Student.month;
	cout << "\n-Day: ";
	cin >> Student.day;

	string month;
	switch (Student.month) {	
		case 1:
			month = "January,";
			break;
		case 2:
			month = "February,";
			break;
		case 3:
			month = "March,";
			break;
		case 4:
			month = "April,";
			break;
		case 5:
			month = "May,";
			break;
		case 6:
			month = "June,";
			break;
		case 7:
			month = "July";
			break;
		case 8:
			month = "August,";
			break;
		case 9:
			month = "September,";
			break;
		case 10:
			month = "October,";
			break;
		case 11:
			month = "November,";
			break;
		case 12:
			month = "December,";
			break;
		default:
			month = "Invalid month,";
			break;
	}

	cout << "Your DoB: " << month << " " << Student.day << " " << Student.year << endl;
	return 0;
}
