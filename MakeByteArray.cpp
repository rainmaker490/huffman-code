// MakeByteArray.cpp
// Written by Varun Patel
#include "MakeByteArray.h"

string MakeByteArray(const string& data, const int dataLength)
{
	// Make multiple of 8
	string final = "";
	string temp = data;

	int noZeros = 8 - dataLength % 8;
	if (noZeros == 0)
		noZeros = 0;

	for (int i = 0; i < noZeros; i++)
		temp += "0";

	int parts = temp.length() / 8;

	for (int i = 0; i < parts; i++)
	{
		int symbolCode = 0;
		int begin = i*8;
		int last = begin + 8;

		int multiplier = 128;

		for (int n = begin; n < last; n++)
		{
			int number = temp[n] - 48;
			symbolCode += number * multiplier;
			multiplier /= 2;
		}
		final += (char) symbolCode;
	}

	return final;
}