#include <iostream> // for cin and cout
#include <string> // for string character full
#include <iomanip> // for formatting
#include <vector> // for vector

using namespace std;

void addBalance();
void addExpense();
void viewExpense();
void budgetSummary();

double calculatedoubleExpense();



int main()
{
    int choice;

    do
    {
        cout << "\n============= WELCOME TO BUDGI ==============\n";
        cout << "1. Add Balance\n";
        cout << "2. Add Expense\n";
        cout << "3. View Expense\n";
        cout << "4. Budget Summary\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addBalance();
                break;
            case 2:
                addExpense();
                break;
            case 3:
                viewExpense();
                break;
            case 4:
                budgetSummary();
                break;
            
            case 5:
                cout << "Thank you for using Budgi!\n";
                break;
            default: 
                cout << "Invalid Choice Please Try Again. (CHOOSE FROM 1 TO 5!)\n";
        }


    } 
    while (choice != 5);
}

void addBalance()
{
    double balance;

    cout << "Enter balance: ";
    cin >> balance;


    while (balance <= 0)
    {
        cout << "INVALID INPUT!!!!! PLEASE ENTER A FUCKING POSITIVE NUMBRER.";

        cout << "Enter balance: ";
        cin >> balance;

    }

    cout << "Balance Succesfully Addded\n";

    return;
}

void addExpense () {
    
}
