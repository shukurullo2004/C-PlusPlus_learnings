#include <iostream>
using namespace std;

struct student{
    int id;
    int Dob[3];
    int Graduation[3];
};

student getStudentInfo(void);
student displayInfo(student s);

int main() {
    struct student s = {
        12225261, {2004, 2, 25}, {2026, 2, 26}
    };

    cout << "\n========================\nInit Student Info...==>\n" << endl;
    displayInfo(s);

    cout << "\nEnter new information: " << endl;
    s = getStudentInfo();

    cout << "\n========================\n\nReceived Student Info... ==> " << endl;
    displayInfo(s);

    return 0;
}

student getStudentInfo(void) {
    student s;

    std::cout << "Enter student id: ";
    cin >> s.id;
    cout << "Enter Birth of date [Y M D]: ";
    cin >> s.Dob[0] >> s.Dob[1] >> s.Dob[2];
    cout << "Enter Graduation [Y M D]: ";
    cin >> s.Graduation[0] >> s.Graduation[1] >> s.Graduation[2];

    return s;
}

student displayInfo(student s) {
    cout << "Student ID: " << s.id << endl;
    cout << "Date of Birth: ";
    switch ((s.Dob[1]))
    {
    case 1:
        cout <<"January";
        break;
    case 2:
        cout <<"February";
        break;
    case 3:
        cout <<"March";
        break;
    case 4:
        cout <<"April";
        break;
    case 5:
        cout <<"May";
        break;
    case 6:
        cout <<"June";
        break;
    case 7:
        cout <<"July";
        break;
    case 8:
        cout <<"August";
        break;
    case 9:
        cout <<"September";
        break;
    case 10:
        cout <<"October";
        break;
    case 11:
        cout <<"November";
        break;
    case 12:
        cout <<"December";
        break;    
    default:
        cout << "Invalid month";
        break;
    }
    cout <<" "<<s.Dob[0]<<" "<<s.Dob[2] << endl;

    cout << "Expected graduation date: ";
    switch ((s.Graduation[1]))
    {
    case 1:
        cout <<"January";
        break;
    case 2:
        cout <<"February";
        break;
    case 3:
        cout <<"March";
        break;
    case 4:
        cout <<"April";
        break;
    case 5:
        cout <<"May";
        break;
    case 6:
        cout <<"June";
        break;
    case 7:
        cout <<"July";
        break;
    case 8:
        cout <<"August";
        break;
    case 9:
        cout <<"September";
        break;
    case 10:
        cout <<"October";
        break;
    case 11:
        cout <<"November";
        break;
    case 12:
        cout <<"December";
        break;    
    default:
        cout << "Invalid month";
        break;
    }
    cout <<" " << s.Graduation[0]<<","<<s.Graduation[2] << endl;
    


    return s;
}
