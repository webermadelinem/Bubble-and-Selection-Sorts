//**************************************************//
//  Program Name: Assignment 9
//  Author: Madeline Weber
//  Date: 11/3/2022
//  Description: This program uses two identaly arrays of eight
//  integers stores in a random order. It should call a function that uses 
//  the bubble sort algorithim modified to sort one fo he arrays in ascending
//  orderand then call a function that uses the selection sort alogirthim
//  to display fthe array in ascending order. It also displays the data after
//  each sort. 
//**************************************************//
#include <iostream>
using namespace std;

// Function Prototypes
void bubbleSort( int [] );
void selectionSort( int[] );
void swap( int &a, int &b );
void displayArray( int [] ); 

int main()
{
	// Declare variables
	int array1[8] = { 11, 8, 9, 3, 14, 66, 87, 1 };
	int array2[8] = { 11, 8, 9, 3, 14, 66, 87, 1 };
	
	// Display the contents of the first array
	cout << "The first unsorted array is: \n";
	for ( int x = 0; x < 8; x++ )
	{
		cout << array1[x] << " ";
	}
	// Whitespace for visibility
	cout << "\n"; 				
	
	// Call the bubble sort function
	bubbleSort( array1 );
	
	// Whitespace for visibility
	cout << "\n"; 
	// Display the second unsorted array
	cout << "The second unsorted array is: \n";
	for ( int x = 0; x < 8; x++ )
	{
		cout << array1[x] << " ";
	}
	// Whitespace for visibility
	cout << "\n"; 
	
	// Call the selection sort function
	selectionSort( array2 );
	
}

//*********************************************************************//
//  Function Name: bubbleSort
//  Returns: none
//  Description: sorts the first array using the bubble sort method
//*********************************************************************//
void bubbleSort( int bubbleArray[] )
{
	cout << "Bubble sort: \n";
	for ( int x = 0; x < 8; x++ )
	{
		for ( int m = 6; m >= 0; m-- )
		if ( bubbleArray[m] > bubbleArray[ m +1] )
		{
			// Call the swap and display functions 
			swap( bubbleArray[m], bubbleArray[m +1]);
			displayArray( bubbleArray );
		}
	}
}

//*********************************************************************//
//  Function Name: selectionSort
//  Returns: none
//  Description: sorts the second array using the selection method
//*********************************************************************//
void selectionSort( int selectionArray[] )
{
	// Declare local variables
	int minIndex, minValue;
	
	cout << "Selection sort: \n";
	for ( int start = 0; start < 7; start++ )
	{
		minIndex = start;
		minValue = selectionArray[start];
		for ( int index = start + 1; index < 8; index++ ) 
		{
			if ( selectionArray[index] < minValue )
			{
				minValue = selectionArray[index];
				minIndex = index;
			}
		}
		selectionArray[minIndex] = selectionArray[start];
		selectionArray[start] = minValue;
		displayArray( selectionArray );
	}
	
}


//*********************************************************************//
//  Function Name: displayArray
//  Returns: none
//  Description: prints the array
//*********************************************************************//
void displayArray( int printArray[] )
{
	for ( int i =0; i < 8; i++ )
	{
		cout << printArray[i] << " ";
	}
	// Whitespace for visibility 
	cout << "\n"; 				
}

//*********************************************************************//
//  Function Name: swap
//  Returns: none
//  Description: swaps the integer values by references
//*********************************************************************//
void swap( int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
