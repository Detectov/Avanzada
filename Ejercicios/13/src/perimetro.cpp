#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14159265358979323846;

void RectangleP(float base, float height){
    float perimiter = 2 * (base + height);
    cout << "The perimeter of the rectangle is " << perimiter << endl;
}

void TriangleP(float sideA, float sideB, float sideC){
    float perimiter = sideA + sideB + sideC;
    cout << "The perimeter of the triangle is " << perimiter << endl;

}

void CircleP(float radius){
    float perimiter = 2 * pi * radius;
    cout << "The perimeter of the circle is " << perimiter << endl;
}

void RectangleA(float base, float height){
    float area = base * height;
    cout << "The area of the rectangle is " << area << endl;
}

void TriangleA(float base, float height){
    float area = (base * height) / 2;
    cout << "The area of the triangle is " << area << endl;
}


void CircleA(float radius){
    float area = M_PI * pow(radius, 2);
    std::cout << "The area of the circle is " << area << std::endl;
}

int main(){
    int option;
    int option2;
    int option3;
    float base, height, radius, perimeter, sideA, sideB, sideC;
    while (option != 3){
        cout <<"Do you want to calculate the perimeter or the area of your shape?\n1 Perimeter\n2 Area\n3 Exit" << endl;
        cin >> option;
        switch(option){
            case 1:
                while(option2 != 4){ 
                    cout << "What shape do you want to calculate the perimeter of?\n1 Rectangle\n2 Triangle\n3 Circle\n4 Back" << endl;
                    cin >> option2;
                    switch (option2){
                        case 1:
                            cout << "Enter the base of the rectangle: ";
                            cin >> base;
                            cout << "Enter the height of the rectangle: ";
                            cin >> height;
                            RectangleP(base, height);
                        break;
                        case 2:
                            cout << "Enter the side A of the triangle: ";
                            cin >> sideA;
                            cout << "Enter the side B of the triangle: ";
                            cin >> sideB;
                            cout << "Enter the side C of the triangle: ";
                            cin >> sideC;
                            TriangleP(sideA, sideB, sideC);
                        break;
                        case 3:
                            cout << "Enter the radius of the circle: ";
                            cin >> radius;
                            CircleP(radius);
                        break;
                        case 4:
                            cout << "Back" << endl;
                            break;
                        default:
                            cout << "Invalid option" << endl;
                }
            }
            break;
            case 2:
                while(option3 != 4){
                    cout <<"What shape do you want to calculate the area of?\n1 Rectangle\n2 Triangle\n3 Circle\n4 Back" << endl;
                    cin >> option3;
                    switch(option3){
                        case 1:
                            cout << "Enter the base of the rectangle:";
                            cin >> base;
                            cout << "Enter the height of the rectangle:";
                            cin >> height;
                            RectangleA(base, height);
                        break;
                        case 2:
                            cout << "Enter the base of the triangle: ";
                            cin >> base;
                            cout << "Enter the height of the triangle: ";
                            cin >> height;
                            TriangleA(base, height);
                        break;
                        case 3:
                            cout << "Enter the radius of the circle: ";
                            cin >> radius;
                            CircleA(radius);
                        break;
                        case 4:
                            cout << "Back" << endl;
                        break;
                        default:
                            cout << "Invalid option" << endl;

                }
            }
            break;
            case 3:
                cout << "Exit" << endl;
            break;
            default:
                cout << "Invalid option" << endl;
        }
    }
}