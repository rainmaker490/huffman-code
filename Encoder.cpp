// Encoder.cpp
// Written by Varun Patel

#include "Encoder.h"
#define ZERO "0"

string Encoder(MyHuffmanMap& myMap, const string& encoderString)
{
	int size = encoderString.size();

	string map;
	string final;

	if (myMap.size() == 1)
		return ZERO;

	for (int i = 0; i < size; i++)
		final += myMap[encoderString[i]];

	return final;
}