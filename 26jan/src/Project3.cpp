#include <iostream>
#include <string>

using namespace std;

//Global Variables
//Constant Variables
const double pi = 3.1416;


//Functions
void hola(int& num1);



int main(){
    int a = 5;
    hola(a);
    

    return 0;
}

void hola(int& num1){
    cout << num1 << endl;
    num1++;
}