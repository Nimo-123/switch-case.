#include <iostream>
using namespace std;

int main() {
    char choice;    // switch..case variable
    double totalcost = 0.0;

    cout << "1. Mushroom burger - $3.99" << endl; // displaying menu options
    cout << "2. Crispy fried chicken - $4.50" << endl;
    cout << "3. Spaghetti & meatballs - $6.99" << endl;
    cout << "4. End" << endl;

    while (choice != '4') {
        cout << "Enter your choice (1-4): "; // acquiring user choices
        cin >> choice;

        switch (choice) {   // calculating the total cost based on the choices selected
            case '1':
                cout << "You selected Mushroom burger. Cost: $3.99" << endl;
                totalcost += 3.99;
                break;
            case '2':
                cout << "You selected Crispy fried chicken. Cost: $4.50" << endl;
                totalcost += 4.50;
                break;
            case '3':
                cout << "You selected Spaghetti & meatballs. Cost: $6.99" << endl;
                totalcost += 6.99;
                break;
            case '4':
                cout << "Thank you for your order!" << endl;
                cout << "Total bill: $" << totalcost << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}
