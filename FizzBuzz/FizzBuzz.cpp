// FizzBuzz.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

// Employee Class
class Employee
{
private: // Member Variables
	string c_name, c_reportTo;
	string manager1 = "Mike";
	string manager2 = "Amy";
public:
	// Function to set c_name to name from main
	void setName(string name) {
		c_name = name;
	}
	// Function to set c_reportTo to reportTo from main
	void setReport(string reportTo) {
		c_reportTo = reportTo;
	}
	// Function to send c_name back to main
	string getName() {
		return c_name;
	}
	// Function to send c_reortTo back to main
	string getreportTo() {
		return c_reportTo;
	}
	// Function to return manager1 and manager2 to main
	string getManager1() {
		return manager1;
	}
	string getManager2() {
		return manager2;
	}
};

//Declares functions for Average and Total
double getAverage(int arr[], int size);
int getTotal(int arr[], int size);


int main()
{
	//Declare variables that will be used by the program
	string name;
	string reportTo;
	char repeat = 'Y';
	int countrows, countcolumns, randcount;
	int numbers[3];
	int RandonNumbers[100][100];
	int number;
	int i = 0;
	int a = 0, b = 0;
	char array;
	string NumArray;
	string output[3];
	int assignment;
	double avg;
	int total;
	srand(static_cast<unsigned int>(time(NULL)));

	// Begins the repeat so that the user can keep running the program till they decide to quit.
	while (repeat == 'y' || repeat == 'Y')
	{
		cout << "Which assignment do you want to do? (Week 2 or Week 3 or Week 4): Week "; // Asks the user which version they want to run
		cin >> assignment;

		switch (assignment) // Switch statement to run the program of their choosing.
		{
		case 2: // Week 2 assignment

			cout << "Would you like to enter an array of numbers? (Y or N) "; //As user if they want to test an array or a single number
			cin >> array; //Declare variable array based on user input
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Clear cin

																 //Begin code for if user wants to run an array of numbers
			if (array == 'Y' || array == 'y')
			{
				cout << "Please enter an array of 2 digit numbers. (Use commas to separate numbers) "; //Ask for user input
				getline(cin, NumArray); //Assign user input to variable NumArray
				int pos = NumArray.find_first_of(','); // Find the first comma and assign the count to pos variable
				while (pos >= 0) //While loop to remove commas from the string and return only the numbers to convert string to int
				{
					string str2 = NumArray.substr(0, pos);
					numbers[i] = stoi(str2);
					NumArray = NumArray.substr(pos + 1);
					pos = NumArray.find_first_of(',');
					i = i + 1;
				}
				numbers[0, 1, 2] = stoi(NumArray);//Assign the variables on the string to the array numbers
				i = 0;
				while (i < 3) //While loop to check each number for divisible by 3, 5, and both to retun Fizz, Buzz, FizzBuzz
				{
					while (numbers[i] % 3 != 0 && numbers[i] % 5 != 0) //Asks for a new number if the number entered is not divisible by 3 or 5
					{
						cout << "\n" << "Number: " << numbers[i] << " is not divisible by 3 or 5! Please enter another number. ";
						cin >> numbers[i];
					}
					if (numbers[i] % 3 == 0 && numbers[i] % 5 == 0) //Outputs FizzBuzz if number is divisible by 3 and 5
					{
						cout << "Number: " << numbers[i] << " - FizzBuzz";
					}
					else if (numbers[i] % 3 == 0) //Outputs Fizz if number is divisible by 3
					{
						cout << "Number: " << numbers[i] << " - Fizz ";
					}
					else if (numbers[i] % 5 == 0) //Outputs Buzz if number is divisible by 5
					{
						cout << "Number: " << numbers[i] << " - Buzz ";
					}
					if (i < 2)
					{
						cout << ", ";
					}
					i = i + 1;
				}
				cout << endl;
			}
			//Begin section if the user chose not to do an array
			else
			{
				cout << "Please enter a positive number (Hit Enter to continue)"; //Ask user for input
				cin >> number; //Assigne input to variable number
							   //Check to see if number is divisable by 3, 5, or both and display Fizz, Buzz, FizzBuzz accordingly
				if (number % 3 == 0 && number % 5 == 0)
				{
					cout << "Number: " << number << " - FizzBuzz" << endl;
				}
				else if (number % 3 == 0)
				{
					cout << "Number: " << number << " - Fizz" << endl;
				}
				else if (number % 5 == 0)
				{
					cout << "Number: " << number << " - Buzz" << endl;
				}
				else {
					cout << "Sorry " << number << " is not divisible by 3 or 5!" << endl;
				}
			}
			break;
		case 3: // Week 3 assignment
			//Asks the user for input on size of 2-D Array
			cout << "How many rows of random numbers do you want?: ";
			cin >> countrows; //Assigns value to rows
			cout << "How many columns of random numbers do you want?: ";
			cin >> countcolumns; // Assigns value to columns
			randcount = countrows * countcolumns; //Assigns random number count

			while (i <= randcount) // While loop to generate randon numbers between 10 and 99 and assign them to the 2D Array
			{
				for (int a = 0; a < countrows; a++)
				{
					for (b = 0; b < countcolumns; b++)
					{
						RandonNumbers[a][b] = rand() % (99 - 10) + 10;
					}
				}
				i++;
			}
			for (a = 0; a < countrows; a++)    //This loops on the rows.
			{
				for (b = 0; b < countcolumns; b++) //This loops on the columns
				{
					cout << RandonNumbers[a][b] << "  ";// Displays the chart of random numbers
				}
				cout << endl;
			}
			// Output of Row, Total, and Average for each row in the array
			for (a = 0; a < countrows; a++)
			{
				avg = getAverage(RandonNumbers[a], countcolumns);
				total = getTotal(RandonNumbers[a], countcolumns);
				cout << '\n';
				cout << "Row " << a + 1 << '\n';
				cout << "Total = " << total << '\n';
				cout << "Average = " << avg << '\n';
				cout << '\n';
			}
			break;
		case 4:
			// Members for class Employee to send name and report to		
			Employee employee1;
			employee1.setName("Ben");
			employee1.setReport("Mike");
			Employee employee2;
			employee2.setName("Lisa");
			employee2.setReport("Mike");
			Employee employee3;
			employee3.setName("Brad");
			employee3.setReport("Amy");
			Employee employee4;
			employee4.setName("Gene");
			employee4.setReport("Amy");
			
			//Sets member manager to use the Employee class
			Employee manager;
			
			cout << "Manager" << endl;
			cout << setw(12) << manager.getManager1() << endl;
			cout << "Shares Same Manager" << endl;
			cout << setw(11) << right << employee1.getName() << ", " << employee2.getName() << endl;
			cout << setw(30) << setfill('_') << "_" << setfill(' ') << endl;
			cout << "Manager" << endl;
			cout << setw(11) << manager.getManager2() << endl;
			cout << "Shares Same Manager" << endl;
			cout << setw(12) << right << employee3.getName() << "," << employee4.getName() << endl;
			break;
		
		}
		//Ask the user if they would like /n repart the program
		cout << "Would you like to try again? (Y or N) ";
		cin >> repeat; //Accept user input and set to repeat
	}
	//End program if user chooses not to repeat*/
	cout << "Thanks for playing. Good Bye!!!";
    return 0;
}

// Function to get the average of each row
double getAverage(int row[],int count)
{
	int i, sum = 0;
	double avg;

	for (i = 0; i < count; ++i) {
		sum += row[i];
	}
	avg = double(sum) / count;
	return avg;
}
// Function to get the total of each row
int getTotal(int row[], int count)
{
	int i, total = 0;
	
	for (i = 0; i < count; ++i)
	{
		total += row[i];
	}
	return total;
}

