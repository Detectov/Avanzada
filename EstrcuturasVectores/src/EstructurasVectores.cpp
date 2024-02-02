#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Car {
  string brand;
  string model;
  int year;  
};

struct Student {
    int id;
    string name;
    string lastname1;
    string lastname2;
    string career;
    int semester;

};

Car InputCarData(Car c);
Student InputStudentData(Student s);


int main(){
    Car myCar;
    Student myStudent;
    myCar = InputCarData(myCar);

    cout <<"Car\nInfo: " << myCar.brand << " " << myCar.model << " " << myCar.year << endl;
    cout <<"Student: " << myStudent.id << " " << myStudent.name << " " << myStudent.lastname1 << " " << myStudent.lastname2 << endl;
    cout << "Semester: " << myStudent.semester << ", " << myStudent.career << endl;
    return 0;
}

//cin.ignore() is used to clear the buffer of the input stream, after the first input

Car InputCarData(Car c){
    cout <<"Type the brand of the car: ";
    getline (cin, c.brand);
    cout <<"Type the model of the car: ";
    cin >> c.model;
    cout <<"Type the year of the car: ";

    cin >> c.year;
    return c;
}