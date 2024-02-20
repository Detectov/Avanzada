#include <iostream>


using namespace std;


void temp(double fahrenheit){
    double celsius = (fahrenheit - 32) * 5 / 9;
    cout << fahrenheit << " degrees Fahrenheit are " << celsius << " degrees Celsius" << endl;
}

void distance(double kilometers){
    double miles = kilometers / 1.609;
    cout << kilometers << " kilometers are " << miles << " miles" << endl;
}
void weight(double kilos){
    double pounds = kilos * 2.20462;
    cout << kilos << " kilos are " << pounds << " pounds" << endl;
}


int main(){
    int option;
    while (option != 4){
    cout << "Enter the option (1 for temperature, 2 for distance, 3 for weight, 4 exit): ";
    cin >> option;
    switch(option){
        case 1:
            double fahrenheit;
            cout << "Enter the temperature in Fahrenheit: ";
            cin >> fahrenheit;
            temp(fahrenheit);
            break;
        case 2:
            double kilometers;
            cout << "Enter the distance in kilometers: ";
            cin >> kilometers;
            distance(kilometers);
            break;
        case 3:
            double kilos;
            cout << "Enter the weight in kilos: ";
            cin >> kilos;
            weight(kilos);
            break;
        case 4:
            cout << "Thanks for using" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
        }
    }
}