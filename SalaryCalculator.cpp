// SalaryCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void main()
{
	// Declaration Section
	char PayCode;
	double Rate, Hours, NumPiece, Comm, Sales, Pay, Salary, EmpNum;

	// Input Section
	cout << "What is the employee's number?" << endl;
	cout << "Enter 0 to quit" << endl;
	cin >> EmpNum;

	while (EmpNum > 0)
	{
		cout << "Enter the employee's pay code" << endl;
		cout << "  H = Hourly" << endl;
		cout << "  P = Piece Work" << endl;
		cout << "  C = Commission" << endl;
		cout << "  S = Salary" << endl;
		cout << "Enter your choice: ";
		cin >> PayCode;

		switch (PayCode)
		{
		case 'H':
		case 'h':
			cout << "What is the employee's pay rate?" << endl;
			cin >> Rate;
			cout << "How many hours did the employee work?" << endl;
			cin >> Hours;
			Pay = Rate * Hours;
			break;
		case 'P':
		case 'p':
			cout << "What is the employee's pay rate?" << endl;
			cin >> Rate;
			cout << "How many pieces did the employee make?" << endl;
			cin >> NumPiece;
			Pay = NumPiece * Rate;
			break;
		case 'C':
		case 'c':
			cout << "What is the employee's commission rate?" << endl;
			cin >> Comm;
			cout << "What is the dollar value of the employee's sales?" << endl;
			cin >> Sales;
			Pay = (Comm / 100) * Sales;
			break;
		case 'S':
		case 's':
			cout << "What is the employee's salary?" << endl;
			cin >> Salary;
			Pay = Salary;
			break;
		default:
			cout << "Please enter a valid selection." << endl;
			Pay = 0.0;
		}

		if (Pay > 0.0)
		{
			cout << "Pay = $" << Pay << endl;
			cout << "" << endl;
		}

		cout << "What is the employee's number?" << endl;
		cout << "Enter 0 to quit" << endl;
		cin >> EmpNum;
	}
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
