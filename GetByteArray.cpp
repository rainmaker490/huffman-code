// GetByteArray.cpp
// Written by Varun Patel
#include "GetByteArray.h"

#define BYTE_LENGTH 8
#define BYTE_MAX 256

string GetByteArray(const string& byteCode, const int byteLength)
{
	string final = "";
	for (unsigned int i = 0; i < byteCode.length(); i++)
	{
		int value = (int) byteCode[i];
		if (value < 0)
			value += BYTE_MAX;

		string temp = "";
		for (int i = 0; i < BYTE_LENGTH; i++)
		{
			temp = (char) (value % 2 + 48) + temp;
			value /= 2;
		}
		final += temp;	
	}

	final.resize(byteLength);

	return final;
}