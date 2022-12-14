// SalaryCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void main()
{
	// Declaration Section
	char payCode, payCodeLower, endSelection;
	char endSelectionLower = 'y';
	double rate, hours, numberOfPieces, commission, sales, pay, salary, employeeNumber;

	do{
		// Input Section
		cout << "What is the employee's number?" << endl;
		cin >> employeeNumber;

		cout << "Enter the employee's pay code" << endl;
		cout << "  H = Hourly" << endl;
		cout << "  P = Piece Work" << endl;
		cout << "  C = Commission" << endl;
		cout << "  S = Salary" << endl;
		cout << "Enter your selection: ";
		cin >> payCode;

		payCodeLower = tolower(payCode);

		if (payCodeLower != 'h' && payCodeLower != 'p' && payCodeLower != 'c' && payCodeLower != 's') {
			do {
				cout << "\nBad input.\n";
				cout << "Enter the employee's pay code" << endl;
				cout << "  H = Hourly" << endl;
				cout << "  P = Piece Work" << endl;
				cout << "  C = Commission" << endl;
				cout << "  S = Salary" << endl;
				cout << "Enter your selection: ";
				cin >> payCode;
				payCodeLower = tolower(payCode);
			} while (payCodeLower != 'h' && payCodeLower != 'p' && payCodeLower != 'c' && payCodeLower != 's');
		}

		switch (payCodeLower)
		{
		case 'h':
			cout << "What is the employee's pay rate?" << endl;
			cin >> rate;
			cout << "How many hours did the employee work?" << endl;
			cin >> hours;
			pay = rate * hours;
			break;
		case 'p':
			cout << "What is the employee's pay rate?" << endl;
			cin >> rate;
			cout << "How many pieces did the employee make?" << endl;
			cin >> numberOfPieces;
			pay = numberOfPieces * rate;
			break;
		case 'c':
			cout << "What is the employee's commission rate?" << endl;
			cin >> commission;
			cout << "What is the dollar value of the employee's sales?" << endl;
			cin >> sales;
			pay = (commission/ 100) * sales;
			break;
		case 's':
			cout << "What is the employee's salary?" << endl;
			cin >> salary;
			pay = salary;
			break;
		default:
			cout << "Please enter a valid selection." << endl;
			pay = 0.0;
		}

		cout << "Employee #" << employeeNumber << " Pay = $" << pay << endl;
		cout << "" << endl;

		cout << "Enter another employee?" << endl;
		cout << "Enter Y for Yes or N for No" << endl;
		cin >> endSelection;

		endSelectionLower = tolower(endSelection);

		if (endSelectionLower != 'y' && endSelectionLower != 'n') {
			do {
				cout << "\nBad input. Please use Y for Yes or N for No\n";
				cin >> endSelection;
				endSelectionLower = tolower(endSelection);
			} while (endSelectionLower != 'y' && endSelectionLower != 'n');
		}
	} while (endSelectionLower == 'y');

	cout << "\nThank You\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
