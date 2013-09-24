// SymbolPriority.cpp - 
// Written by Varun Patel
#include "SymbolPriority.h"
#include <sstream>
using namespace std;

// Copy Constructor
SymbolPriority::SymbolPriority(char symbol, int priority)
{
	Symbol = symbol;
	Priority = priority;
}

// Assignment Operator to perform deep copy
SymbolPriority& SymbolPriority::operator = (const SymbolPriority& a)
{
	Symbol = a.Symbol;
	Priority = a.Priority;
	return *this;
}

// Implement == operator
bool SymbolPriority::operator == (const SymbolPriority& compare) const
{
	return Priority == compare.Priority;
}

// Implement < operator
bool SymbolPriority::operator < (const SymbolPriority& compare) const
{
	return Priority < compare.Priority;
}

// Implement > operator
bool SymbolPriority::operator > (const SymbolPriority& compare) const
{
	return Priority > compare.Priority;
}

// Output stream
ostream& operator << (ostream& out, const SymbolPriority& priorityValue)
{
	return
		out << "\'" << priorityValue.Symbol<< "\'" << " - " << priorityValue.Priority;
}
