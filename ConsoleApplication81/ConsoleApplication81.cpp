#include <iostream>

using std::cout, std::cin,std::endl;

int main() {
    short menuCh = 0;
    int n1 = 4;
    int n2 = 2;

    cout << "Hi! This is calculator!\n"
        << "Choose the required operation: \n"
        << "1 - calculate, 2 - exit\n";
    cin >> menuCh;

    switch(menuCh){
    case 1:
        cout << n1 << "+" << n2 << endl;
        cout << n1 << "-" << n2 << endl;
        cout << n1 << "*" << n2 << endl;
        cout << n1 << "/" << n2 << endl;
        break;
    case 2:
        break;
    }
    return 0;
}
