//Keep repeating until the user input is not 0.

#include <iostream>
using namespace std;

void mark(int mrk) {
    if (mrk >= 90) {
        cout << "This is Good" << endl;
    }
    else if (mrk >= 60 && mrk <= 89) {
        cout << "This is also Good" << endl;
    }
    else if (mrk >= 0 && mrk <= 59) {
        cout << "This is Good as well" << endl;
    }
    else {
        cout << "Invalid Marks!" << endl;
    }
}

int main() {
    int input, marks;
    
    do {
        cout << "Enter your choice {1 to continue, 0 to stop}: ";
        cin >> input;

        if (input == 1) {
            cout << "Enter marks (out of 100): ";
            cin >> marks;
            mark(marks);
        }
        else if (input == 0) {
            cout << "Program stopped." << endl;
        }
        else {
            cout << "Invalid choice! Enter only 1 or 0." << endl;
        }
    } while (input != 0);

    return 0;
}
