#include <iostream>
using namespace std;

int main() {
	char grade;

    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;
    cin >> grade;

    switch (grade) {
        case 'A':
        case 'a':
            cout << "Excellent!" << endl;
            break;
