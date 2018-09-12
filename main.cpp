#include <iostream>

using namespace std;

int main()
{

    string name;
    int size;
    cout << "What is your first name?" << endl;
    cin >> name;
    size = name.length();

    if (size > 15) {

        cout << "Your name is too long. Please insert another name." << endl;

    }
    else {

        for (int i = 0; i < size+4; i++) {
            cout << "*";
        }

        cout << "\n";
        cout << "*";

        for (int i = 0; i < size+2; i++) {
            cout << " ";
        }

        cout << "*";
        cout << "\n";
        cout << "* ";
        cout << name;
        cout << " *";
        cout << "\n";
        cout << "*";

        for (int i = 0; i < size+2; i++) {
            cout << " ";
        }

        cout << "*";
        cout << "\n";

        for (int i = 0; i < size+4; i++) {
            cout << "*";
        }
        cout << "\n";

    }

}
