#include <iostream>

using std::cout, std::cin,std::endl;

int main() {

    short menuCh = 0;
    int n1 = 0;
    int n2 = 0;
    char oper = ' ';

    cout << "Hi! This is calculator!\n"
        << "Choose the required operation: \n"
        << "1 - calculate, 2 - exit" << endl;
    cin >> menuCh;

    switch (menuCh) {
    case 1:
        cout << "Enter first number" << endl;
        cin >> n1;
        cout << "Enter second number" << endl;
        cin >> n2;
        cout << "Choose operation" << endl;
        cin >> oper;
        cout << endl;
        switch (oper) {
        case '+':
            cout << n1 << "+" << n2 << "=" << n1 + n2 << endl;
            break;

        case '-':
            cout << n1 << "-" << n2 << "=" << n1 - n2 << endl;
            break;

        case '*':
            cout << n1 << "*" << n2 << "=" << n1 * n2 << endl;
            break;

        case '/':
            cout << n1 << "/" << n2 << "=" << n1 / n2 << endl;
            break;

        case 2:
            break;
        }
    }
    return 0;
}
