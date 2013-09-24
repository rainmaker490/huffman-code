// SymbolPriority.h 
// Written by Varun Patel
#pragma once
#include <sstream>
using namespace std;

// SymbolPriority 
struct SymbolPriority
{
	// Copy Constructor
	SymbolPriority(char symbol, int priority);

	char Symbol;
	int Priority;

	// Default Constructor - needed 
	SymbolPriority()
	{
	}

	// Assignment Operator to perform deep copy
	SymbolPriority& operator = (const SymbolPriority& a);

	// == operator
	bool operator==(const SymbolPriority& compare) const;

	// < operator
	bool operator < (const SymbolPriority& compare) const;

	// > operator
	bool operator > (const SymbolPriority& compare) const;

};

// Output stream
ostream& operator << (ostream& out, const SymbolPriority& priorityValue);