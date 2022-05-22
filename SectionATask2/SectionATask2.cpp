// SectionATask2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//pre-define function 
int CREAT_List(int*, int);
int SUM(int*, int);

int main()
{
	cout << "demo";
	int SIZE; //define size
	int sum;
	//let 
	cout << "Enter array size: "; 
	cin >> SIZE;
	int *List = new int[SIZE];
	
	cout << "*****************************************************************\n\n";
	cout << "Your array size: " << SIZE<<endl;
	
	*List=CREAT_List(List, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		cout << "You entered array[" << i << "] = " << *(List + i) << endl;
		
	}
	cout << endl;
	sum=SUM(List, SIZE);
	cout << "\n\nThe sum of your list is : " << sum;
	delete[] List;
	List = nullptr;
}
int CREAT_List(int *List, int SIZE)
{
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Please enter your [" << i << "] number : ";
		cin >> *(List+i);
	}

	cout << endl;

	return *List;
}
int SUM(int *List, int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (*(List + i) >= 0) {
			sum += *(List + i);
		}
		
		
	}
	return sum;
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
