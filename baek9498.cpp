#include <iostream>
using namespace std;

int main(void){
    int grade;
    cin >> grade;
    switch(grade){
        case 90 ... 100:
            cout << "A";
            break;
        case 80 ... 89:
            cout << "B";
            break;
        case 70 ... 79:
            cout << "C";
            break;
        case 60 ... 69:
            cout << "D";
            break;
        default:
            cout << "F";
            break;
    }
    cout << endl;
    
    return 0;
}
