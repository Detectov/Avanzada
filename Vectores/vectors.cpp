#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> num);

int main(){
    vector<int> a;
    cout << "Vector 'a' size: " << a.size() << endl;
    a.push_back(5);
    cout << "Vector 'a' size: " << a.size() << endl;
    print_vector(a);
    a.push_back(10);
    cout << "Vector 'a' size: " << a.size() << endl;
    print_vector(a);
    a.push_back(15);
    cout << "Vector 'a' size: " << a.size() << endl;
    print_vector(a);
}

void print_vector(vector<int> num){
    cout << "Vector 'a' elements: ";
    for(int i = 0; i < num.size(); i++){
        cout << num[i] << " ";
    }
    cout << endl;
}