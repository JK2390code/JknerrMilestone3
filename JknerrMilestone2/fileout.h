#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <climits>
using namespace std;

//Allows for the user to save the game data at the end of the game and any notes pertaining to the game

int mainSave()
{
	// Declare the file stream variables
	ofstream fileOut;
	string filename;
	string message;


	// Get the name of the file to create
	cout << "Enter Filename: ";
	cin >> filename;
	cin.ignore(INT_MAX, '\n');

	// Get information want to store
	cout << "Enter the message: ";
	getline(cin, message);

	// Open the file to write to
	fileOut.open(filename);

	// Write the information to the file
	fileOut << message << endl;

	// Close the file stream
	fileOut.close();

	return 0;

}