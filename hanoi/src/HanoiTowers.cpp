#include <iostream>

using namespace std;

void HanoiTowers(int n, char from, char to, char aux){
    if(n == 1 ){
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    HanoiTowers(n-1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    HanoiTowers(n-1, aux, to, from);
}

int main(){
 int numDisks;
 cout << "Enter the number of disks: ";
    cin >> numDisks;            
    HanoiTowers(numDisks, 'A', 'C', 'B');
}