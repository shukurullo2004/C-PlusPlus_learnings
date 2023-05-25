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
	cin >>Student.month;
	cout << "\n-Day: ";
	cin >> Student.day;
	string mont;
	switch (Student.month) {	
	case 1 :
		mont ="January,";
	case 2:
		mont = "February,";
	case 3:
		mont = "March,";
	case 4:
		mont = "April,";
	case 5:
		mont = "May,";
	case 6:
		mont = "June,";
	case 7:
		mont = "July";
	case 8:
		mont ="August,";
	case 9:
		mont = "September,";
	case 10:
		mont = "October,";
	case 11:
		mont = "November,";
	case 12:
		mont = "December,";
	}
	std::cout << "Your DoB: " << mont << Student.day <<" " << Student.year << endl;
	return 0;

}